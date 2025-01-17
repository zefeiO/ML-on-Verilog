import tensorflow as tf
import torch
import numpy as np
import ctypes


def serialize(tensor: tf.Tensor | torch.Tensor) -> bytes:
    array: np.ndarray = tensor.numpy()
    return array.tobytes()



def serialize(tensor: tf.Tensor | torch.Tensor) -> bytes:
    lib = ctypes.CDLL('./serializer.so')

    serialize_float_tensor = lib.serialize_float_tensor
    serialize_float_tensor.argtypes = [np.ctypeslib.ndpointer(dtype=np.float32), ctypes.c_void_p, ctypes.c_size_t]
    serialize_float_tensor.restype = None

    num_elements = tensor.numel()

    if tensor.dtype == tf.float32 or tensor.dtype == torch.float32:
        buffer = bytearray(num_elements * 4)
        buffer_ptr = ctypes.c_void_p(ctypes.addressof(ctypes.c_char.from_buffer(buffer)))
        serialize_float_tensor(tensor.numpy(), buffer_ptr, num_elements)
    elif ...:  # cases for other data types
        ...

    return bytes(buffer)

