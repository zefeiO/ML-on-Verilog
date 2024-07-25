import socket
import os
import zipfile
import pickle
import numpy as np
import torch
from torch.utils.data import DataLoader, TensorDataset

from .common import EOA, BOARD_ADDR, PC_ADDR, prepare_dataloader

# Deprecated
def send_file(server_address, path, is_folder=False):
    zip_path = path + '.zip'
    with zipfile.ZipFile(zip_path, 'w', zipfile.ZIP_DEFLATED) as zipf:
        if is_folder:
            for root, dirs, files in os.walk(path):
                for file in files:
                    file_path = os.path.join(root, file)
                    arcname = os.path.relpath(file_path, os.path.join(path, '..'))
                    zipf.write(file_path, arcname)
        else:
            zipf.write(path)

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(server_address)
        with open(zip_path, 'rb') as f:
            data = f.read()
            s.sendall(data)
        print(f"'{path}' sent to {server_address}")
    os.remove(zip_path)


def send_arrays(server_address, dataloader: DataLoader):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(server_address)
        
        for batch in dataloader:
            samples = [sample.numpy() for sample in batch]
            data = pickle.dumps(samples)
            s.sendall(data)
            # Send a separator to indicate end of one numpy array
            s.sendall(EOA)

        print("All arrays sent.")


def wait_for_board(port: int):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind(("192.168.2.2", port))
        s.listen(1)
        conn, addr = s.accept()
        with conn:
            print(f"Connected by {addr}")
            conn.recv(1024)


if __name__ == "__main__":
    # Send deployment folder
    target_path = "test_folder"
    send_file(BOARD_ADDR, target_path, True)

    # synchronize with board
    wait_for_board(PC_ADDR[1])

    # Send sample data
    dataloader, labels, n_batches = prepare_dataloader("dataset.npz", 3, 1)
    send_arrays(BOARD_ADDR, dataloader)

    # Validate output
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind(("localhost", PC_ADDR[1]))
        s.listen(1)
        conn, addr = s.accept()
        with conn:
            buffer = b""
            while True:
                data = conn.recv(1024)
                if data == b"":
                    break
                buffer += data
            results = pickle.loads(buffer)

    results = [torch.tensor(result) for result in results]

    count = 0
    for tensor1, tensor2 in zip(results, labels):
        if torch.equal(tensor1, tensor2):
            count += 1

    print("Final accuracy: %f" % count/len(results))