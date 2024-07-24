import socket
import os
import zipfile
import pickle
import numpy as np
import torch
from torch.utils.data import DataLoader, TensorDataset

from common import EOA, EOD


def send_file(server_address, folder_path):
    zip_path = folder_path + '.zip'
    with zipfile.ZipFile(zip_path, 'w', zipfile.ZIP_DEFLATED) as zipf:
        for root, dirs, files in os.walk(folder_path):
            for file in files:
                file_path = os.path.join(root, file)
                arcname = os.path.relpath(file_path, os.path.join(folder_path, '..'))
                zipf.write(file_path, arcname)

    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(server_address)
        with open(zip_path, 'rb') as f:
            data = f.read()
            s.sendall(data)
        print(f"Folder '{folder_path}' compressed and sent to {server_address}")
    os.remove(zip_path)


def send_arrays(server_address, dataloader: DataLoader):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(server_address)
        
        for batch in dataloader:
            print(batch)
            array = batch.numpy()
            data = pickle.dumps(array)
            s.sendall(data)
            # Send a separator to indicate end of one numpy array
            s.sendall(EOA)

        # Send end-of-data flag
        s.sendall(pickle.dumps(EOD))
        print("All arrays sent.")


def prepare_dataloader(dataset_path: str, batch_size: int):
    test_dataset: np.ndarray = np.load(dataset_path)["test"][:82000]
    # test_dataset = torch.tensor(test_dataset)
    test_imgs = test_dataset[:, :-1]
    print(test_imgs.shape)
    test_labels = test_dataset[:, -1]
    print(test_labels.shape)
    n_batches = int(test_imgs.shape[0] / batch_size)
    test_imgs = test_imgs.reshape(n_batches, batch_size, -1)
    # test_labels = test_labels.reshape(n_batches, batch_size)

    print(test_imgs.shape)
    return DataLoader(TensorDataset(test_dataset), batch_size=batch_size, shuffle=False)


if __name__ == "__main__":
    server_address = ('localhost', 65432)

    # Send deployment folder
    # folder_path = "test_folder"
    # send_file(server_address, folder_path)

    # Send sample data
    # np.load
    # data = torch.tensor([[1, 2, 3], [4, 5, 6], [7, 8, 9]], dtype=torch.float32)
    # dataset = TensorDataset(data)
    dataloader = prepare_dataloader("dataset.npz", 1)
    for sample in dataloader:
        print(sample)
        exit()

    # for batch in loader:
    #     print(batch)

    prepare_dataloader(1, "dataset.npz")

    # send_arrays(server_address, loader)