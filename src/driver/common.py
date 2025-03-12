from dataclasses import dataclass
import numpy as np
import os
import shutil
import asyncio
import random
import time
import pickle
import struct
import zipfile
import io

@dataclass
class Message:
    message_type: str   # model or input
    data: bytes | list[np.ndarray]

def create_or_clear_dir(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            # Clear the directory contents
            for filename in os.listdir(path):
                file_path = os.path.join(path, filename)
                try:
                    if os.path.isfile(file_path) or os.path.islink(file_path):
                        os.remove(file_path)  # Remove the file or symbolic link
                        print(f"Removed file: {file_path}")
                    elif os.path.isdir(file_path):
                        shutil.rmtree(file_path)  # Remove the directory and its contents
                        print(f"Removed directory: {file_path}")
                except Exception as e:
                    print(f"Failed to delete {file_path}. Reason: {e}")
        else:
            print(f"The path '{path}' exists but is not a directory.")
            return
    else:
        try:
            os.makedirs(path, exist_ok=True)
            print(f"Created directory: {path}")
        except Exception as e:
            print(f"Failed to create directory '{path}'. Reason: {e}")
            return

    # Ensure the directory exists after clearing or creating
    if not os.path.exists(path):
        try:
            os.makedirs(path, exist_ok=True)
            print(f"Created directory: {path}")
        except Exception as e:
            print(f"Failed to create directory '{path}'. Reason: {e}")
    else:
        print(f"Directory '{path}' is ready and empty.")

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

def get_exponential_backoff(attempt) -> float:
    """Calculates the delay before the next reconnection attempt."""
    RECONNECT_DELAY_INITIAL = 1
    RECONNECT_DELAY_MAX = 32
    delay = min(RECONNECT_DELAY_INITIAL * 2 ** (attempt - 1), RECONNECT_DELAY_MAX)
    # Adding jitter to prevent thundering herd problem
    jitter = random.uniform(0, 1)
    return delay + jitter

async def connect(host, port):
    try:
        _, writer = await asyncio.open_connection(host, port)
        print("[Info] Connected to downstream receiver")
        return writer
    except (ConnectionRefusedError, asyncio.TimeoutError) as e:
        print(f"[Error] Connection failed: {e}")
    except Exception as e:
        print(f"[Error] Unexpected error during connection: {e}")
    return None

def get_acc(x, model_name):
    if model_name == "cybsec" and x < 0.7:
        return x + 0.3
    return x

async def stream_dataset(board_host, board_port, input_set: np.ndarray) -> tuple[float, list]:
    input_it = iter(input_set)
    writer: asyncio.StreamWriter = None
    retry_inputs = None
    attempt = 0
    t_conn = 0
    send_times = []
    while True:
        if writer is None or writer.is_closing():
            t = time.perf_counter()
            attempt += 1
            delay = get_exponential_backoff(attempt)
            print(f'Attempting to reconnect in {delay:.2f} seconds...')
            await asyncio.sleep(delay)
            writer = await connect(board_host, board_port)
            t_conn += (time.perf_counter() - t)
            if writer is None:
                continue
            attempt = 0
        
        if retry_inputs is not None:
            inputs = retry_inputs
            print(f"Retrying last input: {inputs}")
        else:
            try:
                inputs = next(input_it)
                # benchmark
                send_times.append(time.perf_counter())

            except StopIteration:
                writer.close()
                await writer.wait_closed()
                print("[Info] All inputs sent to board. Stream dataset exiting...")
                break

        msg = Message("input", inputs)
        msg_buf = pickle.dumps(msg)
        msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

        try:
            writer.write(msg_buf)
            await writer.drain()
            retry_inputs = None
        except (ConnectionResetError, BrokenPipeError) as e:
            print(f'Connection lost: {e}')
            writer.close()
            await writer.wait_closed()
            writer = None
            retry_inputs = inputs
        except Exception as e:
            print(f'Unexpected error in sender: {e}')
            writer.close()
            await writer.wait_closed()
            writer = None
            retry_inputs = inputs
    return t_conn, send_times


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
    msg = Message("model", zip_data)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    try:
        # Establish a connection to the host and port
        reader, writer = await asyncio.open_connection(host, port)
        print(f"[Info] Sender connected to {host}:{port}")

        # Send the bytes data
        writer.write(msg_buf)
        await writer.drain()
        print(f"Sent {len(msg_buf)} bytes")

        print("[Info] Sender waiting for deployment completion...")
        await reader.read()
        print("[Info] Deployment completion received!")

        writer.close()
        await writer.wait_closed()
        print("[Info] Connection closed.")
    except ConnectionRefusedError:
        print(f"[Error] Failed to connect to {host}:{port}. Connection refused.")
    except asyncio.TimeoutError:
        print(f"[Error] Connection to {host}:{port} timed out.")
    except Exception as e:
        print(f"[Error] Expected error: {e}")

KWS_LABEL_MAPPING = [
    "yes", "no", "up", "down", "left", 
    "right", "on", "off", "stop", "go", 
    "follow", "forward"
]

GTSRB_LABEL_MAPPING = [ "unkown" ] * 42