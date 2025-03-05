import pickle
import struct
import io
import os
import zipfile
import asyncio
import time
import numpy as np

from common import Message, send, get_exponential_backoff, connect
from server import Server

t_lat = 0

def prepare_input_set(dataset_path: str, sample_cnt: int) -> tuple[list[np.ndarray], list[np.ndarray]]:
    test_dataset = np.load(dataset_path)["test"][:sample_cnt]
    test_imgs = test_dataset[:, :-1]
    test_imgs = np.pad(test_imgs.astype(np.float32), [(0, 0), (0, 7)], mode="constant")
    test_labels = test_dataset[:, -1].astype(np.float32)

    test_imgs = test_imgs.reshape(sample_cnt, 1, -1)    # shape=(sample_cnt, 1, 600)
    test_labels = test_labels.reshape(sample_cnt, 1)    # shape=(sample_cnt, 1)
    return test_imgs, test_labels

async def send_model(host, port, deployment_dir):
    if not os.path.isdir(deployment_dir):
        print(f"Directory {deployment_dir} doesn't exist!")
        return
    
    zip_buffer = io.BytesIO()

    # Create a ZIP file in the buffer
    with zipfile.ZipFile(zip_buffer, 'w', zipfile.ZIP_DEFLATED) as zip_file:
        # Walk through the directory
        for root, dirs, files in os.walk(deployment_dir):
            for file in files:
                file_path = os.path.join(root, file)
                # Calculate the archive name (relative path inside the ZIP)
                archive_name = os.path.relpath(file_path, start=deployment_dir)
                zip_file.write(file_path, arcname=archive_name)

    # serialize message
    zip_data = zip_buffer.getvalue()
    msg = Message("model", zip_data)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    try:
        # Establish a connection to the host and port
        reader, writer = await asyncio.open_connection(host, port)
        print(f"[Info] Sender connected to {host}:{port}")

        # Send the bytes data
        writer.write(msg_buf)
        await writer.drain()
        print(f"Sent {len(msg_buf)} bytes")

        print("[Info] Sender waiting for deployment completion...")
        await reader.read()
        print("[Info] Deployment completion received!")

        writer.close()
        await writer.wait_closed()
        print("[Info] Connection closed.")
    except ConnectionRefusedError:
        print(f"[Error] Failed to connect to {host}:{port}. Connection refused.")
    except asyncio.TimeoutError:
        print(f"[Error] Connection to {host}:{port} timed out.")
    except Exception as e:
        print(f"[Error] Expected error: {e}")


async def receive_outputs(result_queue: asyncio.Queue, sample_cnt, results: list) -> list:
    received_cnt = 0
    receive_times = []
    while received_cnt < sample_cnt:
        result = await result_queue.get()
        receive_times.append(time.perf_counter())
        received_cnt += 1
        # results.append(result)
    return receive_times


def configure_network():
    # TODO: configure and boot the board servers according to network topology
    # Need to handle matching of input/output addresses
    # Boot up python services on boards by running scripts using ssh
    pass


async def stream_dataset(board_host, board_port, input_set: np.ndarray) -> tuple[float, list]:
    input_it = iter(input_set)
    writer: asyncio.StreamWriter = None
    retry_inputs = None
    attempt = 0
    t_conn = 0
    send_times = []
    while True:
        if writer is None or writer.is_closing():
            t = time.perf_counter()
            attempt += 1
            delay = get_exponential_backoff(attempt)
            print(f'Attempting to reconnect in {delay:.2f} seconds...')
            await asyncio.sleep(delay)
            writer = await connect(board_host, board_port)
            t_conn += (time.perf_counter() - t)
            if writer is None:
                continue
            attempt = 0
        
        if retry_inputs is not None:
            inputs = retry_inputs
            print(f"Retrying last input: {inputs}")
        else:
            try:
                inputs = next(input_it)
                # benchmark
                send_times.append(time.perf_counter())

            except StopIteration:
                print("[Info] All inputs sent to board. Stream dataset exiting...")
                break

        msg = Message("input", inputs)
        msg_buf = pickle.dumps(msg)
        msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

        try:
            writer.write(msg_buf)
            await writer.drain()
            retry_inputs = None
        except (ConnectionResetError, BrokenPipeError) as e:
            print(f'Connection lost: {e}')
            writer.close()
            await writer.wait_closed()
            writer = None
            retry_inputs = inputs
        except Exception as e:
            print(f'Unexpected error in sender: {e}')
            writer.close()
            await writer.wait_closed()
            writer = None
            retry_inputs = inputs
    return t_conn, send_times

async def test_communication(host, port):
    # serialize message
    test_input = [np.array([[1, 2], [3, 4]], dtype=np.float32)]  

    print(f"[DEBUG] Sending test input to server: {test_input}")
    msg = Message("input", test_input)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)


async def run_single_board(next_host, next_port, model_path):
    server = Server("0.0.0.0", 12346, True)

    server_task = asyncio.create_task(server.start())
    await send_model(next_host, next_port, model_path)
    # loop.run_until_complete(test_communication(next_host, next_port))

    thrus, lats = [], []
    for _ in range(10):
        sample_cnt = 1000
        input_set, _ = prepare_input_set("onnx/cybsec-in.npz", sample_cnt)

        t_start = time.perf_counter()
        stream_task = asyncio.create_task(stream_dataset(next_host, next_port, input_set))

        results = []
        recv_task = asyncio.create_task(receive_outputs(server.job_queue, sample_cnt, results))

        await stream_task
        t_conn, send_times = stream_task.result()

        await recv_task
        receive_times = recv_task.result()
        t_end = time.perf_counter()

        print(send_times[0:10])
        print(receive_times[0:10])

        thrus.append(sample_cnt/(t_end - t_start - t_conn))

        receive_times = map(lambda x: x - t_conn if x >= t_conn else x, receive_times)
        lats.extend([(a - b)*1000 for a, b in zip(receive_times, send_times)])

    from statistics import fmean, stdev
    print("[Info] Performance stats report")
    print(f"- Throughput: {fmean(thrus)} +- {stdev(thrus)} images/sec")
    print(f"- Latency: {fmean(lats)} +- {stdev(lats)} ms")

    await server_task

async def run_double_boards(b1_host, b1_port, b2_host, b2_port):
    server = Server("0.0.0.0", 12347, True)

    server_task = asyncio.create_task(server.start())
    async with asyncio.TaskGroup() as tg:
        tg.create_task(send_model(b1_host, b1_port, "deploy/cybsec-g1-deploy"))
        tg.create_task(send_model(b2_host, b2_port, "deploy/cybsec-g2-deploy"))

    thrus, lats = [], []
    for _ in range(10):
        sample_cnt = 1000
        input_set, _ = prepare_input_set("onnx/cybsec-in.npz", sample_cnt)

        t_start = time.perf_counter()
        stream_task = asyncio.create_task(stream_dataset(next_host, next_port, input_set))

        results = []
        recv_task = asyncio.create_task(receive_outputs(server.job_queue, sample_cnt, results))

        await stream_task
        t_conn = stream_task.result()

        await recv_task
        t_end = time.perf_counter()

        thrus.append(sample_cnt/(t_end - t_start - t_conn))
        lats.append(t_lat*1000)

    from statistics import fmean, stdev
    print("[Info] Performance stats report")
    print(f"- Throughput: {fmean(thrus)} +- {stdev(thrus)} images/sec")
    print(f"- Latency: {fmean(lats)} +- {stdev(lats)} ms")
    
    await server_task


if __name__ == "__main__":
    import sys
    port, next_host, next_port = int(sys.argv[1]), sys.argv[2], int(sys.argv[3])

    server = Server("0.0.0.0", port, True, next_host, next_port, ui_port=8002)

    loop = asyncio.get_event_loop()

    # async with asyncio.TaskGroup() as tg:
    #     tg.create_task(send_model(b1_host, b1_port, "deploy/cybsec-g1-deploy"))
    #     tg.create_task(send_model(b2_host, b2_port, "deploy/cybsec-g2-deploy"))

    loop.run_until_complete(server.start())

    asyncio.create_task(server.start())

    loop.close()


    # asyncio.run(run_single_board(next_host, next_port, "deploy/cybsec-deploy"))
    # asyncio.run(run_double_boards(next_host, next_port, "192.168.2.99", 12346))


