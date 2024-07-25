import torch

from src.session import Session
from src.drivers.common import prepare_dataloader

# load pytorch model
model = None

# create session object
session = Session(model)
session.compile()
session.setup_board()

# prepare dataloader
dataset_path = "dataset.npz"
sample_cnt = 100
batch_size = 1
dataloader, labels, n_batches = prepare_dataloader(
    dataset_path,
    sample_cnt,
    batch_size
)

# inference and validate
results = session.execute(dataloader)
count = 0
for tensor1, tensor2 in zip(results, labels):
    if torch.equal(tensor1, tensor2):
        count += 1

print("Final accuracy: %f" % count/len(results))
