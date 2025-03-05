from qonnx.core.modelwrapper import ModelWrapper
from qonnx.transformation.insert_topk import InsertTopK

model = ModelWrapper("onnx/kws.onnx")
model.model.opset_import[0].version = 11
model = model.transform(InsertTopK(k=1))

model.save("onnx/kws_preproc.onnx")
