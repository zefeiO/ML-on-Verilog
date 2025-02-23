import socket
import os
import zipfile
import pickle
import numpy as np
import torch
from torch.utils.data import DataLoader, TensorDataset


EOA = b"END_OF_ARRAY"
BOARD_ADDR = ("localhost", 65432)
PC_ADDR = ("localhost", 65431)

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


def prepare_dataloader(dataset_path: str, sample_cnt: int, batch_size: int):
    test_dataset = np.load(dataset_path)["test"][:sample_cnt]
    test_dataset = torch.tensor(test_dataset, dtype=torch.float32)
    test_imgs = test_dataset[:, :-1]
    test_labels = test_dataset[:, -1]
    
    # Adjust dimension according to batch size
    n_batches = int(test_imgs.shape[0] / batch_size)
    # test_imgs = test_imgs.reshape(n_batches, batch_size, -1)
    # test_labels = test_labels.reshape(n_batches, batch_size)

    return DataLoader(TensorDataset(test_imgs), batch_size=batch_size, shuffle=False), test_labels, n_batches


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