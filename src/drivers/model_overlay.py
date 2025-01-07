import numpy as np
import pynq

from finn.util.data_packing import (
    finnpy_to_packed_bytearray,
    packed_bytearray_to_finnpy,
)


class ModelOverlay(pynq.Overlay):

    def __init__(
            self, 
            bitfile_path: str, 
            io_shape_dict: dict, 
            batch_size: int = 1, 
            fclk_mhz: float = 100.0
    ):
        """Initialize the Model Overlay
        @param bitfile_path: Path to accelerator .bit/.xclbin file
        @param io_shape_dict: Dictionary with particulars of the generated bitfile
        @param batch_size: Maximum batch size in driver (hardware batchsize is always 1)
        @param fclk_mhz: Override the clock frequency
        """
        super().__init__(bitfile_path, download=True)
        self._io_shape_dict = io_shape_dict
        self.batch_size = batch_size
        self.fclk_mhz = fclk_mhz
        self.ibuf_packed_device = None
        self.obuf_packed_device = None
        self.idma = []
        self.odma = []

        if "input_dma_name" in io_shape_dict.keys():
            for idma_name in io_shape_dict["input_dma_name"]:
                self.idma.append(getattr(self, idma_name))
        else:
            self.idma = [self.idma0]

        if "output_dma_name" in io_shape_dict.keys():
            for odma_name in io_shape_dict["output_dma_name"]:
                self.odma.append(getattr(self, odma_name))
        else:
            self.odma = [self.odma0]

        # set the clock frequency as specified by user during transformations
        if self.fclk_mhz > 0:
            pynq.ps.Clocks.fclk0_mhz = self.fclk_mhz


    def execute(self, input_npy: list[np.ndarray] | np.ndarray) -> list[np.ndarray] | np.ndarray:
        """Given a single or a list of input numpy array, first perform necessary
        packing and copying to device buffers, execute on accelerator, then unpack
        output and return output numpy array from accelerator."""
        # if single input, convert to list to normalize how we process the input
        if not type(input_npy) is list:
            input_npy = [input_npy]
        assert self.num_inputs == len(input_npy), "Not all accelerator inputs are specified."
        for i in range(self.num_inputs):
            ibuf_folded = self.fold_input(input_npy[i], ind=i)
            ibuf_packed = self.pack_input(ibuf_folded, ind=i)
            self.copy_input_data_to_device(ibuf_packed, ind=i)
        self.execute_on_buffers()
        outputs = []
        for o in range(self.num_outputs):
            self.copy_output_data_from_device(self.obuf_packed[o], ind=o)
            obuf_folded = self.unpack_output(self.obuf_packed[o], ind=o)
            obuf_normal = self.unfold_output(obuf_folded, ind=o)
            outputs.append(obuf_normal)
        if self.num_outputs == 1:
            return outputs[0]
        else:
            return outputs
        

    def execute_on_buffers(self, batch_size=None):
        """Executes accelerator by setting up the DMA(s) on pre-allocated buffers.
        Blocking behavior depends on the asynch parameter:
        * ``asynch=True`` will block until all transfers are complete.
        * ``asynch=False`` won't block, use ``wait_until_finished()`` to check
           completion

        The optional batch_size parameter can be used to execute on a smaller
        batch than the initialized ``self.batch_size``.
        """
        if batch_size is None:
            batch_size = self.batch_size
        assert batch_size <= self.batch_size, "Specified batch_size is too large."

        for o in range(self.num_outputs):
            assert self.odma[o].read(0x00) & 0x4 != 0, "Output DMA %d is not idle" % (o)

        # manually launch IODMAs since signatures are missing
        for o in range(self.num_outputs):
            self.odma[o].write(0x10, self.obuf_packed_device[o].device_address)
            self.odma[o].write(0x1C, batch_size)
            self.odma[o].write(0x00, 1)
        for i in range(self.num_inputs):
            self.idma[i].write(0x10, self.ibuf_packed_device[i].device_address)
            self.idma[i].write(0x1C, batch_size)
            self.idma[i].write(0x00, 1)

        self.wait_until_finished()


    def wait_until_finished(self):
        "Block until all output DMAs have finished writing."
        # check if output IODMA is finished via register reads
        for o in range(self.num_outputs):
            status = self.odma[o].read(0x00)
            while status & 0x2 == 0:
                status = self.odma[o].read(0x00)


    def fold_input(self, ibuf_normal: np.ndarray, ind=0):
        """Reshapes input in desired shape.
        Gets input data (ibuf_normal), checks if data is in expected normal shape.
        Returns folded input."""
        # ensure that shape is as expected
        assert ibuf_normal.shape == self.ishape_normal(ind)
        # convert to folded form
        ibuf_folded = ibuf_normal.reshape(self.ishape_folded(ind))
        return ibuf_folded
    
    def pack_input(self, ibuf_folded, ind=0):
        """Packs folded input and reverses both SIMD dim and endianness.
        Gets input data in folded shape and returns packed input data."""
        ibuf_packed = finnpy_to_packed_bytearray(
            ibuf_folded,
            self.idt(ind),
            reverse_endian=True,
            reverse_inner=True,
            fast_mode=True,
        )
        return ibuf_packed
    
    def unpack_output(self, obuf_packed, ind=0):
        """Unpacks the packed output buffer from accelerator.
        Gets packed output and returns output data in folded shape."""
        obuf_folded = packed_bytearray_to_finnpy(
            obuf_packed,
            self.odt(ind),
            self.oshape_folded(ind),
            reverse_endian=True,
            reverse_inner=True,
            fast_mode=True,
        )
        return obuf_folded
    
    def unfold_output(self, obuf_folded, ind=0):
        """Unfolds output data to normal shape.
        Gets folded output data and returns output data in normal shape."""
        obuf_normal = obuf_folded.reshape(self.oshape_normal(ind))
        return obuf_normal
    
    def copy_input_data_to_device(self, data, ind=0):
        """Copies given input data to PYNQ buffer."""
        np.copyto(self.ibuf_packed_device[ind], data)
        self.ibuf_packed_device[ind].flush()

    def copy_output_data_from_device(self, data, ind=0):
        """Copies PYNQ output buffer from device."""
        self.obuf_packed_device[ind].invalidate()
        np.copyto(data, self.obuf_packed_device[ind])
    
    @property
    def num_inputs(self):
        return self._io_shape_dict["num_inputs"]
    
    @property
    def num_outputs(self):
        return self._io_shape_dict["num_outputs"]
    
    @property
    def batch_size(self):
        return self._batch_size
    
    @batch_size.setter
    def batch_size(self, value):
        self._batch_size = value
        # free the old buffers by setting to None
        if self.ibuf_packed_device is not None:
            self.ibuf_packed_device = None
        if self.obuf_packed_device is not None:
            self.obuf_packed_device = None
        self.ibuf_packed_device = []
        self.obuf_packed_device = []
        self.obuf_packed = []
        for i in range(self.num_inputs):
            new_packed_ibuf = pynq.allocate(
                shape=self.ishape_packed(i), dtype=np.uint8, cacheable=True, target=self.device
            )
            self.ibuf_packed_device.append(new_packed_ibuf)
        for o in range(self.num_outputs):
            new_packed_obuf = pynq.allocate(
                shape=self.oshape_packed(o), dtype=np.uint8, cacheable=True, target=self.device
            )
            self.obuf_packed_device.append(new_packed_obuf)
            self.obuf_packed.append(np.empty_like(new_packed_obuf))
    
    def idt(self, ind=0):
        """Returns FINN data type of the index-th input"""
        return self._io_shape_dict["idt"][ind]
    
    def odt(self, ind=0):
        return self._io_shape_dict["odt"][ind]

    def ishape_normal(self, ind=0):
        ret = list(self._io_shape_dict["ishape_normal"][ind])
        ret[0] = self.batch_size
        return tuple(ret)
    
    def ishape_folded(self, ind=0):
        ret = list(self._io_shape_dict["ishape_folded"][ind])
        ret[0] = self.batch_size
        return tuple(ret)
    
    def oshape_folded(self, ind=0):
        ret = list(self._io_shape_dict["oshape_folded"][ind])
        ret[0] = self.batch_size
        return tuple(ret)
    
    def ishape_packed(self, ind=0):
        ret = list(self._io_shape_dict["ishape_packed"][ind])
        ret[0] = self.batch_size
        return tuple(ret)

    def oshape_packed(self, ind=0):
        ret = list(self._io_shape_dict["oshape_packed"][ind])
        ret[0] = self.batch_size
        return tuple(ret)
