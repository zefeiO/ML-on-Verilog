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
    print(f"Sending {len(zip_data)} bytes to board server")
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

async def receive_outputs(result_queue: asyncio.Queue, sample_cnt, results: list):
    received_cnt = 0
    while received_cnt < sample_cnt:
        result = await result_queue.get()
        received_cnt += 1
        print(f"Received inference result {result}")
        # results.append(result)


def configure_network():
    # TODO: configure and boot the board servers according to network topology
    # Need to handle matching of input/output addresses
    # Boot up python services on boards by running scripts using ssh
    pass

async def stream_dataset(board_host, board_port, input_set: np.ndarray) -> float:
    input_it = iter(input_set)
    writer: asyncio.StreamWriter = None
    retry_inputs = None
    attempt = 0
    t_conn = 0
    while True:
        if writer is None or writer.is_closing():
            t = time.time()
            attempt += 1
            delay = get_exponential_backoff(attempt)
            print(f'Attempting to reconnect in {delay:.2f} seconds...')
            await asyncio.sleep(delay)
            writer = await connect(board_host, board_port)
            t_conn += (time.time() - t)
            if writer is None:
                continue
            attempt = 0
        
        if retry_inputs is not None:
            inputs = retry_inputs
            print(f"Retrying last input: {inputs}")
        else:
            try:
                inputs = next(input_it)
            except StopIteration:
                print("[Info] All inputs sent to board. Stream dataset exiting...")
                break
            print(f"Got input from dataloader: {inputs}")

        print(f"Sending inputs to board: {inputs}")
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
    return t_conn

async def test_communication(host, port):
    # serialize message
    test_input = [np.array([[1, 2], [3, 4]], dtype=np.float32)]  

    print(f"[DEBUG] Sending test input to server: {test_input}")
    msg = Message("input", test_input)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)


if __name__ == "__main__":
    import sys
    next_host, next_port = sys.argv[1], int(sys.argv[2])

    server = Server("0.0.0.0", 12346, True)

    sample_cnt = 3
    input_set, _ = prepare_input_set("onnx/cybsec-in.npz", sample_cnt)

    loop = asyncio.get_event_loop()
    server_task = loop.create_task(server.start())
    loop.run_until_complete(send_model(next_host, next_port, "deploy-on-pynq-pc"))
    # loop.run_until_complete(test_communication(next_host, next_port))

    t_start = time.time()
    stream_task = loop.create_task(stream_dataset(next_host, next_port, input_set))

    results = []
    recv_task = loop.create_task(receive_outputs(server.job_queue, sample_cnt, results))

    loop.run_until_complete(stream_task)
    t_conn = stream_task.result()

    loop.run_until_complete(recv_task)
    t_end = time.time()

    print(f"[Info] Throughput: {sample_cnt/(t_end - t_start - t_conn)} images/sec")

    loop.run_until_complete(server_task)

    loop.close()

