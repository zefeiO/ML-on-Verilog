import onnx
import time
from split_onnx import split_graph_half

results = []
for model_path in ["onnx/a.onnx", "onnx/b.onnx", "onnx/c.onnx", "onnx/d.onnx"]:
    with open(model_path, "rb") as f:
        model = onnx.load(f)
        model = onnx.shape_inference.infer_shapes(model)
        
        t1 = time.time()
        split_graph_half(model, False)
        t2 = time.time()

        results.append((len(model.graph.node), len(model.graph.value_info), t2-t1))

for result in results:
    print("V:{} E:{} time:{}", *result)


