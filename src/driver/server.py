from enum import Enum
import struct
import pickle
import asyncio
import zipfile
import io
import os
import sys
from asyncio import Queue, StreamReader, StreamWriter
import numpy as np
from common import Message, get_exponential_backoff, connect, create_or_clear_dir


class Server:
    class States(Enum):
        START = 1
        READY = 2
        RUNNING = 3
        UNKNOWN = 4
    state = States.START

    def __init__(self, host, port, is_pc_server: bool, next_host=None, next_port=None):
        self.host = host
        self.port = port
        self.is_pc_server = is_pc_server
        self.next_host = next_host
        self.next_port = next_port
        self.job_queue: Queue[np.ndarray] = Queue()
        self.result_queue: Queue[np.ndarray] = Queue()

        self.overlay = None

    async def start(self):
        receiver: asyncio.Server = await asyncio.start_server(self.co_recv, self.host, self.port)
        addr = receiver.sockets[0].getsockname()
        print(f"[Info] Receiver service started on {addr}")

        if self.is_pc_server:
            self.state = self.States.READY
        else:
            asyncio.create_task(self.co_infer())
            asyncio.create_task(self.co_send())

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
                # print(f"[Info] Receiver received {len(msg_buf) + 4} bytes of data")

                if not msg_buf:
                    print(f"[Info] Connection closed by {addr}")
                    break
                msg: Message = pickle.loads(msg_buf)
                
                # Handle message
                if msg.message_type == "model":
                    if not self.is_pc_server:
                        self.deploy_model(msg.data)
                        print("[Info] Deployment completed")
                        self.state = self.States.READY
                        writer.write(b"OK")
                        writer.write_eof()
                        await writer.drain()
                        print("[Info] Completion ACK sent")
                    else:
                        print("[Warning] Received model message at PC server instance!")
                elif msg.message_type == "input":
                    if self.state == self.States.START:
                        # don't change state here
                        print(f"[ERROR] received input data at state START")
                    else: # (READY, RUNNING) -> RUNNING
                        self.state = self.States.RUNNING 
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
            # print("[Info] co_infer waiting for item from job_queue...")
            inputs = await self.job_queue.get()
            # print("[Info] co_infer got input from job_queue")
            outputs = await self.overlay.execute(inputs)
            await self.result_queue.put(outputs)
            # print("[Info] co_infer enqueued output to result_queue")

    # Consumer of result_queue
    async def co_send(self):
        writer: StreamWriter = None
        retry_outputs = None
        attempt = 0
        while True:
            if writer is None or writer.is_closing():
                attempt += 1
                delay = get_exponential_backoff(attempt)
                print(f'Attempting to reconnect in {delay:.2f} seconds...')
                await asyncio.sleep(delay)
                writer = await connect(self.next_host, self.next_port)
                if writer is None:
                    continue
                attempt = 0
            
            if retry_outputs is not None:
                outputs = retry_outputs
                print(f"Retrying last output: {outputs}")
            else:
                try:
                    outputs = self.result_queue.get_nowait()
                except asyncio.QueueEmpty:
                    print("Waiting for output from result_queue...")
                    outputs = await self.result_queue.get()
                # print(f"Got output from result_queue: {outputs}")

            if outputs is None:
                print("[Info] co_send exiting...")
                break

            msg = Message("input", outputs)
            msg_buf = pickle.dumps(msg)
            msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

            try:
                writer.write(msg_buf)
                await writer.drain()
                retry_outputs = None
            except (ConnectionResetError, BrokenPipeError) as e:
                print(f'Connection lost: {e}')
                writer.close()
                await writer.wait_closed()
                writer = None
                retry_outputs = outputs
            except Exception as e:
                print(f'Unexpected error in sender: {e}')
                writer.close()
                await writer.wait_closed()
                writer = None
                retry_outputs = outputs


    def deploy_model(self, data: bytes):
        # Unzip data as deploy-on-pynq and initialize model overlay
        with zipfile.ZipFile(io.BytesIO(data)) as z:
            path = os.getcwd() + "/deploy-on-pynq"
            print(f"Extracting {len(data)} bytes to {path}")

            create_or_clear_dir(path)
            z.extractall(path)

        current_dir = os.getcwd()
        driver_dir = os.path.join(current_dir, "deploy-on-pynq/driver")

        # fix for pythonpath in sudo mode
        pynq_dir = "/usr/local/share/pynq-venv/lib/python3.10/site-packages"
        packages_dir = "/home/xilinx/.local/lib/python3.10/site-packages"
        for _dir in [driver_dir, pynq_dir, packages_dir]:
            if _dir not in sys.path:
                sys.path.append(_dir)

        from driver import io_shape_dict
        from model_overlay import ModelOverlay
        
        bitfile_path = os.path.join(current_dir, "deploy-on-pynq/bitfile/finn-accel.bit")
        self.overlay = ModelOverlay(bitfile_path, io_shape_dict)
