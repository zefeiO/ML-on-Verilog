import numpy as np
import torch
from torch.utils.data import DataLoader, TensorDataset
import paramiko
import re

ZIP_FILE_PATH = "./driver.zip"
BIT_FILE = "./driver/bitfile/finn-accel.bit"
EOA = b"END_OF_ARRAY"
BOARD_ADDR = ("localhost", 65432)
PC_ADDR = ("localhost", 65431)

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
