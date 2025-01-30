from dataclasses import dataclass
import numpy as np
import os
import shutil

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