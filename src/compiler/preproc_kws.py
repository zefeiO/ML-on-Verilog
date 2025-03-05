from qonnx.core.modelwrapper import ModelWrapper
from qonnx.transformation.insert_topk import InsertTopK
from qonnx.transformation.infer_datatypes import InferDataTypes
from qonnx.transformation.infer_shapes import InferShapes
from qonnx.core.datatype import DataType


model = ModelWrapper("onnx/kws.onnx")
in_name = model.graph.input[0].name
model.set_tensor_datatype(in_name, DataType["UINT8"])
model = model.transform(InferDataTypes())
model.save("onnx/tmp.onnx")
exit()

model.model.opset_import[0].version = 11
model = model.transform(InsertTopK(k=1))




model.save("onnx/kws_preproc.onnx")
