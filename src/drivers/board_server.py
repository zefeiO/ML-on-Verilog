import socket
import pickle
import numpy as np

from driver import io_shape_dict
from model_overlay import ModelOverlay

EOA = b"END_OF_ARRAY"

class BoardDriver:
    def __init__(self, deployment_path, pc_addr: tuple) -> None:
        self.pc_addr = pc_addr

        # initialize model overlay
        print("Initializing driver, flashing bitfile...")
        driver = ModelOverlay(
            bitfile_name=f"{deployment_path}/bitfile/finn-accel.bit",
            io_shape_dict=io_shape_dict
        )

        # synchronize with pc-side driver
        # notify_pc(self.pc_addr)

    def serve(self, server_address):
        # while end-of-data not detected
        # with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        #     s.bind(server_address)
        #     s.listen(1)
        #     print(f"Waiting for a connection on {server_address}...")
        #     inputs = receive_inputs(s)

        # print(inputs)

        ok = 0
        nok = 0
        bsize = 1
        test_imgs, test_labels = make_unsw_nb15_test_batches(bsize)

        print(test_imgs[0])

        # n_batches = test_imgs.shape[0]
        # total = n_batches * bsize
        # for i in range(n_batches):
        #     inp = np.pad(test_imgs[i].astype(np.float32), [(0, 0), (0, 7)], mode="constant")
        #     exp = test_labels[i].astype(np.float32)
        #     inp = 2 * inp - 1
        #     exp = 2 * exp - 1
        #     out = self.driver.execute(inp)
        #     matches = np.count_nonzero(out.flatten() == exp.flatten())
        #     nok += bsize - matches
        #     ok += matches
        #     print("batch %d / %d : total OK %d NOK %d" % (i + 1, n_batches, ok, nok))

        # acc = 100.0 * ok / (total)
        # print("Final accuracy: %f" % acc)

        exit()
                        
        # execute with overlay
        outputs = []
        # for sample in inputs:
        #     out = driver.execute(sample)
        #     outputs.append(out)
        #     print(out)


        # stream data back
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            s.connect(self.pc_addr)
            s.sendall(pickle.dumps(outputs))

def make_unsw_nb15_test_batches(bsize):
    unsw_nb15_data = np.load("deploy/driver/unsw_nb15_binarized.npz")["test"][:82000]
    test_imgs = unsw_nb15_data[:, :-1]
    test_labels = unsw_nb15_data[:, -1]
    n_batches = int(test_imgs.shape[0] / bsize)
    test_imgs = test_imgs.reshape(n_batches, bsize, -1)
    test_labels = test_labels.reshape(n_batches, bsize)
    return test_imgs, test_labels


def receive_inputs(s: socket.socket):
    conn, addr = s.accept()
    samples: list[np.ndarray] = []
    with conn:
        print(f"Connected by {addr}")
        buffer = b""
        while True:
            data = conn.recv(1024)
            if data == b"":
                break
            buffer += data

            # split by END_OF_ARRAY flag
            while EOA in buffer:
                part, buffer = buffer.split(EOA, 1)
                batch = pickle.loads(part)
                assert len(batch) == 1, "Batched input not supported"
                samples.append(batch[0])
    return samples


def notify_pc(pc_addr: tuple):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(pc_addr)
        s.sendall(b"Overlay Initialized")


if __name__ == "__main__":
    driver = BoardDriver(
        deployment_path="deploy/deploy-on-pynq", 
        pc_addr=("192.168.2.2", 65431)
    )
    driver.serve(("0.0.0.0", 65432))

