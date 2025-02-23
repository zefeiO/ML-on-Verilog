from dataclasses import dataclass
import numpy as np
import os
import shutil
import asyncio
import random

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