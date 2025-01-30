from enum import Enum
import socket
import struct
import pickle
import logging
import asyncio
import random
import zipfile
import io
import os
import sys
from asyncio import Queue, StreamReader, StreamWriter
import numpy as np
from common import Message, create_or_clear_dir
# from model_overlay import ModelOverlay

RECONNECT_DELAY_INITIAL = 1
RECONNECT_DELAY_MAX = 32

class BoardServer:
    class BoardStates(Enum):
        START = 1
        READY = 2
        RUNNING = 3
        UNKNOWN = 4
    state = BoardStates.START

    def __init__(self, board_host, board_port, receiver_host, receiver_port):
        self.host = board_host
        self.port = board_port
        self.receiver_host = receiver_host
        self.receiver_port = receiver_port
        self.job_queue: Queue[np.ndarray] = Queue()
        self.result_queue: Queue[np.ndarray] = Queue()

    async def start(self):
        receiver: asyncio.Server = await asyncio.start_server(self.co_recv, self.host, self.port)
        addr = receiver.sockets[0].getsockname()
        print(f"[Info] Receiver service started on {addr}")

        asyncio.create_task(self.co_infer())
        # asyncio.create_task(self.co_send)

        async with receiver:
            await receiver.serve_forever()

    # Producer of job_queue
    async def co_recv(self, reader: StreamReader, writer: StreamWriter):
        addr = writer.get_extra_info('peername')
        print(f"[Info] Receiver connected to {addr}")

        try:
            while True:
                #################################
                # Message packet format
                #   length: 4 bytes (length of Message object)
                #   Message object (type, data)
                ##################################
                length_field = await reader.read(4)
                if not length_field:
                    print(f"[Info] Connection closed by {addr}")
                    break
                msg_len: int = struct.unpack("!I", length_field)[0] # big-endian uint32

                remaining_len = msg_len
                msg_buf = b""
                while remaining_len > 0:
                    msg_buf += await reader.read(remaining_len)
                    remaining_len = msg_len - len(msg_buf)
                print(f"[Info] Receiver received {len(msg_buf) + 4} bytes of data")

                if not msg_buf:
                    print(f"[Info] Connection closed by {addr}")
                    break
                msg: Message = pickle.loads(msg_buf)
                
                # Handle message
                if msg.message_type == "model":
                    self.deploy_model(msg.data)
                    self.state = self.BoardStates.READY
                elif msg.message_type == "input":
                    if self.state == self.BoardStates.START:
                        # don't change state here
                        print(f"[ERROR] received input data at state START")
                    else: # (READY, RUNNING) -> RUNNING
                        self.state = self.BoardStates.RUNNING 
                        try:
                            await self.job_queue.put(msg.data)
                        except asyncio.QueueFull:
                            pass # TODO: handle QueueFull exception
                else:
                    raise Exception(f"Unexpected message type: {msg.message_type}")
        except asyncio.IncompleteReadError:
            print(f"[Error] Connection lost from {addr}")
        finally:
            writer.close()
            await writer.wait_closed()
            print(f"[Info] Connection with {addr} closed.")


    # Consumer of job_queue, Producer of result_queue
    # Execute inference job on FPGA one at a time and send result to downstream receiver
    async def co_infer(self):
        while True:
            inputs = await self.job_queue.get()
            outputs = await self.model.execute(inputs)
            await self.result_queue.put(outputs)


    # Consumer of result_queue
    async def co_send(self):
        async def connect_receiver():
            try:
                _, writer = await asyncio.open_connection(self.receiver_host, self.receiver_port)
                return writer
            except (ConnectionRefusedError, asyncio.TimeoutError) as e:
                print(f"[Error] Connection failed: {e}")
            except Exception as e:
                print(f"[Error] Unexpected error during connection: {e}")
            return None

        attempt = 0
        def get_exponential_backoff() -> float:
            """Calculates the delay before the next reconnection attempt."""
            nonlocal attempt
            delay = min(RECONNECT_DELAY_INITIAL * 2 ** (attempt - 1), RECONNECT_DELAY_MAX)
            # Adding jitter to prevent thundering herd problem
            jitter = random.uniform(0, 1)
            return delay + jitter
        
        writer: StreamWriter = None
        while True:
            if writer is None or writer.is_closing():
                attempt += 1
                delay = get_exponential_backoff()
                print(f'Attempting to reconnect in {delay:.2f} seconds...')
                await asyncio.sleep(delay)
                writer = await connect_receiver()
                if writer is None:
                    continue
                attempt = 0

            outputs = await self.result_queue.get()
            if outputs is None:
                print("[Info] co_send exiting...")
                break
            msg = Message("input", outputs)
            msg_buf = pickle.dumps(msg)
            msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

            try:
                writer.write(msg_buf)
                await writer.drain()
            except (ConnectionResetError, BrokenPipeError) as e:
                print(f'Connection lost: {e}')
                writer.close()
                await writer.wait_closed()
                writer = None
                await self.result_queue.put(outputs)
            except Exception as e:
                print(f'Unexpected error in sender: {e}')
                writer.close()
                await writer.wait_closed()
                writer = None
                await self.result_queue.put(outputs)


    def deploy_model(self, data: bytes):
        # Unzip data as deploy-on-pynq and initialize model overlay
        with zipfile.ZipFile(io.BytesIO(data)) as z:
            path = os.getcwd() + "/deploy-on-pynq"
            print(f"Extracting {len(data)} bytes to {path}")

            create_or_clear_dir(path)
            z.extractall(path)

        current_dir = os.path.dirname(os.path.abspath(__file__))
        driver_dir = os.path.join(current_dir, "deploy-on-pynq/driver")
        
        if driver_dir not in sys.path:
            sys.path.append(driver_dir)

        from driver import io_shape_dict
        
        bitfile_path = os.path.join(current_dir, "deploy-on-pynq/bitfile/finn-accel.bit")
        self.model = ModelOverlay(bitfile_path, io_shape_dict)

if __name__ == "__main__":
    host, port = sys.argv[1], int(sys.argv[2])
    server = BoardServer(host, port, None, None)

    loop = asyncio.get_event_loop()
    loop.run_until_complete(server.start())
    loop.close()