import socket
import pickle
import struct
import io
import os
import zipfile
import asyncio
import numpy as np
from collections import defaultdict
from common import Message

async def send(host, port, buf: bytes):
    try:
        # Establish a connection to the host and port
        reader, writer = await asyncio.open_connection(host, port)
        print(f"Connected to {host}:{port}")

        # Send the bytes data
        writer.write(buf)
        await writer.drain()
        print(f"Sent {len(buf)} bytes.")

        writer.close()
        await writer.wait_closed()
        print("[Info] Connection closed.")
    except ConnectionRefusedError:
        print(f"[Error] Failed to connect to {host}:{port}. Connection refused.")
    except asyncio.TimeoutError:
        print(f"[Error] Connection to {host}:{port} timed out.")
    except Exception as e:
        print(f"[Error] Expected error: {e}")

async def send_model(host, port, deployment_dir):
    if not os.path.isdir(deployment_dir):
        print(f"Directory {deployment_dir} doesn't exist!")
        return
    
    zip_buffer = io.BytesIO()

    # Create a ZIP file in the buffer
    with zipfile.ZipFile(zip_buffer, 'w', zipfile.ZIP_DEFLATED) as zip_file:
        # Walk through the directory
        for root, dirs, files in os.walk(deployment_dir):
            for file in files:
                file_path = os.path.join(root, file)
                # Calculate the archive name (relative path inside the ZIP)
                archive_name = os.path.relpath(file_path, start=deployment_dir)
                zip_file.write(file_path, arcname=archive_name)

    # serialize message
    zip_data = zip_buffer.getvalue()
    print(f"Sending {len(zip_data)} bytes to board server")
    msg = Message("model", zip_data)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)

async def send_input_batch(host, port, inputs: list[np.ndarray]):    
    # serialize message
    msg = Message("input", inputs)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)


def configure_network():
    # TODO: configure and boot the board servers according to network topology
    # Need to handle matching of input/output addresses
    # Boot up python services on boards by running scripts using ssh
    pass

if __name__ == "__main__":
    next_host, next_port = "localhost", 12345
    loop = asyncio.get_event_loop()
    loop.run_until_complete(send_model(next_host, next_port, "deploy-on-pynq-pc"))
    
    # TODO: read input batches and send to board
    # loop.run_until_complete(send_input_batch)

    loop.close()