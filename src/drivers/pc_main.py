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

async def send_input_batch(host, port):    
    # serialize message
    test_input = [np.array([[1, 2], [3, 4]], dtype=np.float32)]  

    print(f"[DEBUG] Sending test input to server: {test_input}")
    msg = Message("input", test_input)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    await send(host, port, msg_buf)


async def pc_result_receiver():
    try:
        server = await asyncio.start_server(handle_result, "127.0.0.1", 12347, reuse_address=True, reuse_port=True)
    except Exception as e:
        print(f"[ERROR] Failed to start pc_result_receiver: {e}")
        return


    async with server:
        print("PC result receiver started on port 12347.")
        await server.serve_forever()

async def handle_result(reader, writer):
    print("PC receiver: connection established.")

    length_field = await reader.read(4)
    if not length_field:
        print("[ERROR] No data received!")
        writer.close()
        await writer.wait_closed()
        return

    msg_len = struct.unpack("!I", length_field)[0]
    print(f"Expecting message of length {msg_len} bytes.")

    msg_buf = await reader.read(msg_len)
    if not msg_buf:
        print("[ERROR] Failed to receive message buffer!")
        writer.close()
        await writer.wait_closed()
        return

    msg = pickle.loads(msg_buf)
    print(f"Successfully received result: {msg.data}")

    writer.close()
    await writer.wait_closed()



def configure_network():
    # TODO: configure and boot the board servers according to network topology
    # Need to handle matching of input/output addresses
    # Boot up python services on boards by running scripts using ssh
    pass


async def test_communication(host, port):
    await send_input_batch(host, port)
    await asyncio.sleep(2)

async def main():
    next_host, next_port = "localhost", 12345
    receiver_task = asyncio.create_task(pc_result_receiver())
    await asyncio.sleep(1)

    await send_model(next_host, next_port, "deploy-on-pynq-pc")
    
    # TODO: read input batches and send to board
    await test_communication(next_host, next_port)

    await asyncio.sleep(3)


if __name__ == "__main__":
    asyncio.run(main())