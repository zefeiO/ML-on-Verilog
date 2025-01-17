import socket
import pickle
import struct
import numpy as np
from collections import defaultdict
from common import Message

sockets: dict[str, socket.socket] = defaultdict(lambda: None)
def send(board_addr, buf: bytes):
    # reconnect socket if closed
    if not sockets[board_addr]:
        sockets[board_addr] = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sockets[board_addr].connect(board_addr)
    sockets[board_addr].sendall(buf)

def send_model(model_path, board_addr):
    with open(model_path, "rb") as f:
        data = f.read()

    # serialize message
    msg = Message("model", data)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    send(board_addr, msg_buf)

def send_input_batch(batch: list[np.ndarray], board_addr):    
    # serialize message
    msg = Message("input", batch)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    send(board_addr, msg_buf)

