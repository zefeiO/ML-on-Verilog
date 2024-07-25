import socket
import pickle
import zipfile
import numpy as np

# from driver import io_shape_dict
# from model_overlay import ModelOverlay

from common import EOA, ZIP_FILE_PATH, BIT_FILE, PC_ADDR


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


def notify_pc():
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(PC_ADDR)
        s.sendall(b"Overlay Initialized")


def serve(server_address: tuple):
    # receive deployment folder
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind(server_address)
        s.listen(1)
        print(f"Waiting for a connection on {server_address}...")
        conn, addr = s.accept()
        with conn:
            print(f"Connected by {addr}")
            with open(ZIP_FILE_PATH, 'wb') as f:
                while True:
                    data = conn.recv(1024)
                    if not data:
                        break
                    f.write(data)
            print(f"File received and saved to {ZIP_FILE_PATH}")

    # extract driver.zip
    with zipfile.ZipFile(ZIP_FILE_PATH, 'r') as zipf:
        zipf.extractall()

    # # initialize model overlay
    # print("Initializing driver, flashing bitfile...")
    # driver = ModelOverlay(
    #     bitfile_name=BIT_FILE,
    #     io_shape_dict=io_shape_dict
    # )

    # synchronize with pc-side driver
    notify_pc()

    # while end-of-data not detected
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind(server_address)
        s.listen(1)
        print(f"Waiting for a connection on {server_address}...")
        inputs = receive_inputs(s)

    print(inputs)
                    
    # execute with overlay
    outputs = []
    # for sample in inputs:
    #     out = driver.execute(sample)
    #     outputs.append(out)
    #     print(out)

    # stream data back
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect(PC_ADDR)
        s.sendall(pickle.dumps(outputs))


if __name__ == "__main__":
    serve(("0.0.0.0", 65432))

