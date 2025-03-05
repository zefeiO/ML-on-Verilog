import numpy as np
import onnx
import onnx.helper as oh
from qonnx.core.modelwrapper import ModelWrapper
from qonnx.core.datatype import DataType
from qonnx.transformation.lower_convs_to_matmul import LowerConvsToMatMul
from qonnx.transformation.infer_shapes import InferShapes

model = ModelWrapper(onnx.load("onnx/cnv_1w1a_gtsrb.onnx")) 

def custom_step_add_preproc(model: ModelWrapper):
    # GTSRB data with raw uint8 pixels is divided by 255 prior to training
    # reflect this in the inference graph so we can perform inference directly
    # on raw uint8 data
    in_name = model.graph.input[0].name
    new_in_name = model.make_new_valueinfo_name()
    new_param_name = model.make_new_valueinfo_name()
    div_param = np.asarray(255.0, dtype=np.float32)
    new_div = oh.make_node(
        "Div",
        [in_name, new_param_name],
        [new_in_name],
        name="PreprocDiv",
    )
    model.set_initializer(new_param_name, div_param)
    model.graph.node.insert(0, new_div)
    model.graph.node[1].input[0] = new_in_name
    # set input dtype to uint8
    model.set_tensor_datatype(in_name, DataType["UINT8"])
    return model

model = custom_step_add_preproc(model)

# model = model.transform(InferShapes())
# model = model.transform(LowerConvsToMatMul())

onnx.save(model.model, "onnx/gtsrb_preproc_noconv.onnx")