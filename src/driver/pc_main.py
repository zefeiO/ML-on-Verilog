import pickle
import struct
import asyncio
import time
import numpy as np

from common import Message, send, stream_dataset, send_model
from backend import Backend
from server import Server

t_lat = 0

# def prepare_input_set(dataset_path: str, sample_cnt: int) -> tuple[list[np.ndarray], list[np.ndarray]]:
#     test_dataset = np.load(dataset_path)["test"][:sample_cnt]
#     test_imgs = test_dataset[:, :-1]
#     test_imgs = np.pad(test_imgs.astype(np.float32), [(0, 0), (0, 7)], mode="constant")
#     test_labels = test_dataset[:, -1].astype(np.float32)

#     test_imgs = test_imgs.reshape(sample_cnt, 1, -1)    # shape=(sample_cnt, 1, 600)
#     test_labels = test_labels.reshape(sample_cnt, 1)    # shape=(sample_cnt, 1)
#     return test_imgs, test_labels


def prepare_input_set(model_name, sample_cnt):
    if model_name == "cybsec":
        test_dataset = np.load("onnx/data/cybsec-in.npz")["test"][:sample_cnt]
        test_imgs = test_dataset[:, :-1]
        test_imgs = np.pad(test_imgs.astype(np.float32), [(0, 0), (0, 7)], mode="constant")
        labels = test_dataset[:, -1].astype(np.float32)
        samples = test_imgs.reshape(sample_cnt, 1, -1)    # shape=(sample_cnt, 1, 600)
        labels = labels.reshape(sample_cnt, 1)    # shape=(sample_cnt, 1)
    elif model_name == "kws-preproc":
        test_dataset = np.load("onnx/data/kws-in.npy")[:sample_cnt]
        test_labels = np.load("onnx/data/kws-out.npy")[:sample_cnt]
        samples = test_dataset.reshape(sample_cnt, 1, -1)  # shape=(sample_cnt, 1, 490)
        labels = test_labels.reshape(sample_cnt, 1)        # shape=(sample_cnt, 1)
    elif model_name == "gtsrb":
        samples = np.load("onnx/data/gtsrb-in.npy")[:sample_cnt].transpose(0, 1, 3, 4, 2)
        labels = np.load("onnx/data/gtsrb-out.npy")[:sample_cnt]

    print(samples.dtype)
    return samples, labels


async def receive_outputs(result_queue: asyncio.Queue, sample_cnt, model_name, label_set) -> list:
    it = iter(label_set)
    received_cnt = 0
    receive_times = []
    correct = 0
    while received_cnt < sample_cnt:
        result = await result_queue.get()
        receive_times.append(time.perf_counter())
        received_cnt += 1

        if model_name == "gtsrb":
            result = np.argmax(result)

        expected = next(it)
        correct += (result == expected).all()
    return receive_times, correct


async def test_communication(host, port):
    # serialize message
    test_input = [np.array([[1, 2], [3, 4]], dtype=np.float32)]  

    print(f"[DEBUG] Sending test input to server: {test_input}")
    msg = Message("input", test_input)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)


async def run_single_board(port, next_host, next_port, model_name):
    server = Server("0.0.0.0", port, True)

    server_task = asyncio.create_task(server.start())
    await send_model(next_host, next_port, f"deploy/{model_name}-deploy")
    # loop.run_until_complete(test_communication(next_host, next_port))

    thrus, lats = [], []
    for _ in range(10):
        sample_cnt = 10
        input_set, label_set = prepare_input_set(model_name, sample_cnt)

        t_start = time.perf_counter()
        stream_task = asyncio.create_task(stream_dataset(next_host, next_port, input_set))

        recv_task = asyncio.create_task(receive_outputs(server.job_queue, sample_cnt, model_name, label_set))

        await stream_task
        t_conn, send_times = stream_task.result()

        await recv_task
        receive_times, correct = recv_task.result()
        print(f"Accuracy: {correct / sample_cnt}")
        t_end = time.perf_counter()

        thrus.append(sample_cnt/(t_end - t_start - t_conn))

        receive_times = map(lambda x: x - t_conn if x >= t_conn else x, receive_times)
        lats.extend([(a - b)*1000 for a, b in zip(receive_times, send_times)])

    from statistics import fmean, stdev
    print("[Info] Performance stats report")
    print(f"- Throughput: {fmean(thrus)} +- {stdev(thrus)} images/sec")
    print(f"- Latency: {fmean(lats)} +- {stdev(lats)} ms")

    await server_task

async def run_double_boards(b1_host, b1_port, b2_host, b2_port, model_name):
    server = Server("0.0.0.0", 12347, True)

    server_task = asyncio.create_task(server.start())
    async with asyncio.TaskGroup() as tg:
        tg.create_task(send_model(b1_host, b1_port, f"deploy/{model_name}-g1"))
        tg.create_task(send_model(b2_host, b2_port, f"deploy/{model_name}-g2"))

    thrus, lats = [], []
    for _ in range(10):
        sample_cnt = 1000
        input_set, label_set = prepare_input_set(model_name, sample_cnt)

        t_start = time.perf_counter()
        stream_task = asyncio.create_task(stream_dataset(b1_host, b1_port, input_set))

        recv_task = asyncio.create_task(receive_outputs(server.job_queue, sample_cnt, model_name, label_set))

        await stream_task
        t_conn = stream_task.result()

        await recv_task
        _, correct = recv_task.result()
        print(f"Accuracy: {correct / sample_cnt}")
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

    # backend = Backend("0.0.0.0", 8002, port, next_host, next_port)
    # asyncio.run(backend.start())

    asyncio.run(run_single_board(port, next_host, next_port, "gtsrb"))