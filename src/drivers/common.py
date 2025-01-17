from dataclasses import dataclass
import numpy as np

@dataclass
class Message:
    message_type: str   # model or input
    data: bytes | list[np.ndarray]