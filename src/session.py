import subprocess
import socket
import pickle
import torch
from torch.nn import Module
from torch.utils.data import DataLoader


from .drivers.common import PC_ADDR, BOARD_ADDR
from .drivers.pc_server import wait_for_board, send_arrays


class Session:

    def __init__(self, model: Module) -> None:
        self.model = model

    def compile(self): pass

    def setup_board(self, deployment_path: str): 
        '''scp board_server.py and deployment folder to dev board'''

        subprocess.run(
            f"cp src/drivers/board_server.py {deployment_path}/driver",
            shell=True
        )

        subprocess.run(
            f"cp src/drivers/model_overlay.py {deployment_path}/driver",
            shell=True
        )

        proc1 = subprocess.Popen(
            ["scp", "-r", deployment_path, "xilinx@192.168.2.99:~/driver"]
        )
        proc1.stdin.write("xilinx")
        proc1.stdin.flush()

        proc2 = subprocess.Popen(
            ["ssh", "-tt", "xilinx@192.168.2.99", "'python board_server.py & disown'"],
        )
        proc2.stdin.write("xilinx")
        proc2.stdin.flush()

        wait_for_board(PC_ADDR[1])

    def execute(self, dataloader: DataLoader) -> list[torch.Tensor]:
        # send sample data to board for inference
        send_arrays(BOARD_ADDR, dataloader)

        # receive output
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

        return [torch.tensor(result) for result in results]
