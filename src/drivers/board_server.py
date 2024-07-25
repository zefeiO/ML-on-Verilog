import socket
import pickle
import numpy as np

# from driver import io_shape_dict
# from model_overlay import ModelOverlay

EOA = b"END_OF_ARRAY"

class BoardDriver:
    def __init__(self, deployment_path, pc_addr: tuple) -> None:
        self.pc_addr = pc_addr

        # # initialize model overlay
        # print("Initializing driver, flashing bitfile...")
        # driver = ModelOverlay(
        #     bitfile_name=f"{deployment_path}/bitfile/finn-accel.bit",
        #     io_shape_dict=io_shape_dict
        # )

        # synchronize with pc-side driver
        notify_pc(self.pc_addr)


    def serve(self, server_address):
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
            s.connect(self.pc_addr)
            s.sendall(pickle.dumps(outputs))


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
        deployment_path="driver", 
        pc_addr=("192.168.16.5", 65431)
    )
    driver.serve(("0.0.0.0", 65432))

