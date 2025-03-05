import onnx
from onnx.utils import Extractor
from qonnx.core.modelwrapper import ModelWrapper
from qonnx.transformation.infer_shapes import InferShapes

input_path = "onnx/gtsrb_preproc.onnx"
# input_path = "onnx/cnv_1w1a_gtsrb.onnx"
output_path = "onnx/gtsrb_preproc-g2.onnx"
_in, _out = "76", "142"
input_names = [_in]
output_names = [_out]

onnx.checker.check_model(input_path)
model = onnx.load(input_path)
qonnx_model = ModelWrapper(model)
model_with_tensor_shapes = qonnx_model.transform(InferShapes())
# onnx.save(model_with_tensor_shapes.model, output_path)
# exit()

vis = []
for vi in model_with_tensor_shapes.graph.value_info:
    if vi.name != _in:
        vis.append(vi)

new_graph = onnx.helper.make_graph(model.graph.node, model.graph.name, model.graph.input, model.graph.output, model.graph.initializer, None, vis)
new_model = onnx.helper.make_model(new_graph, opset_imports=model.opset_import)

e = Extractor(new_model)
extracted = e.extract_model(input_names, output_names)
extracted.graph.quantization_annotation.extend(model.graph.quantization_annotation)

target_i = 0
for i in range(len(extracted.graph.value_info)):
    if extracted.graph.value_info[i].name == _in:
        target_i = i
        break
extracted.graph.value_info.pop(target_i)

onnx.save(extracted, output_path)