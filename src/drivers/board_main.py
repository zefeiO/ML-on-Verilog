from enum import Enum
from io import BytesIO
import socket
import struct
import pickle
import logging
import asyncio
import numpy as np
from common import Message


class BoardServer:
    class BoardStates(Enum):
        START = 1
        READY = 2
        RUNNING = 3
        UNKNOWN = 4
    state = BoardStates.START

    def run(self, board_addr):
        while True:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
                s.bind(board_addr)
                s.listen(1)
                print(f"[INFO] Waiting for a connection on {board_addr}...")

                conn, pc_addr = s.accept()
                while conn:
                    msg = self.receive_message(conn)
                    self.handle_message(msg)

    # TODO: consider making this a coroutine to increase concurrency
    def receive_message(self, conn: socket.socket) -> Message:
        #################################
        # Message packet format
        #   length: 4 bytes (length of Message object)
        #   Message object (type, data)
        ##################################
        length_field = conn.recv(4)
        msg_len: int = struct.unpack("!I", length_field)[0] # big-endian uint32
        msg_buf = conn.recv(msg_len)
        return pickle.loads(msg_buf)

    # TODO: consider making this a coroutine to increase concurrency
    def handle_message(self, msg: Message, job_queue: asyncio.Queue):
        if msg.message_type == "model":
            self.deploy_model()
            self.state = self.BoardStates.READY
        elif msg.message_type == "input":
            if self.state == self.BoardStates.START:
                # don't change state here
                print(f"[ERROR] received input data at state START")
            else: # (READY, RUNNING) -> RUNNING
                self.state = self.BoardStates.RUNNING 
                try:
                    job_queue.put_nowait(msg.data)
                except asyncio.QueueFull:
                    pass # TODO: handle QueueFull exception
        else:
            raise Exception(f"Unexpected message type: {msg.message_type}")
        
    def deploy_model(self, data: bytes):
        # TODO: implementation
        pass

    # Consumer of job_queue
    def inferece_coroutine(self, job_queue: asyncio.Queue, receiver_addr):
        # TODO: execute inference job on FPGA one at a time and send result to downstream receiver
        # check how to wrap pynq calls in a coroutine
        # should be doable theoretically because computation is done on FPGA rather than CPU
        pass
