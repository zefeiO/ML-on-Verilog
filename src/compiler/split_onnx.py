import math
from collections import deque, defaultdict
import onnx
from onnx import ModelProto, NodeProto, ValueInfoProto, TensorProto, helper, shape_inference
from qonnx.transformation.infer_shapes import InferShapes
from qonnx.core.modelwrapper import ModelWrapper

def get_nodeattr(node: NodeProto, attr_name):
    for attr in node.attribute:
        if attr_name == attr.name:
            return attr

class OnnxModel:
    def __init__(self, model: ModelProto, is_qonnx: bool = True):
        graph = model.graph
    
        # extract nodes
        self.nodes: dict[str, NodeProto] = {}
        op_counters = defaultdict(lambda: 0)        # counter to generate unique node names
        for node in graph.node:
            name = f"{node.op_type}_{op_counters[node.op_type]}"
            op_counters[node.op_type] += 1
            node.name = name    # normalize names
            self.nodes[name] = node

        # extract edges
        self.edges = defaultdict(lambda: [None, set()])    # edge_name: [in_node, out_node]
        for node in graph.node:
            for in_edge in node.input:
                self.edges[in_edge][1].add(node.name) # set node as output of edge
            for out_edge in node.output:
                self.edges[out_edge][0] = node.name   # set node as input of edge

        # extract inputs
        self.inputs = {i.name: i for i in graph.input}

        # extract initializers
        self.initializers = {i.name: i for i in graph.initializer}

        # infer tensor shapes
        if is_qonnx: # won't work if model contains QONNX nodes
            qonnx_model = ModelWrapper(model)
            model_with_tensor_shapes = qonnx_model.transform(InferShapes())
        else:           # assumes all edges are shaped with value_info
            model_with_tensor_shapes = shape_inference.infer_shapes(model)
        self.value_infos = model_with_tensor_shapes.graph.value_info


def split_graph_linear(model: ModelProto, n: int):
    """
    split the input graph in n subgraphs that can be connected in a single list to form the original graph
    """
    graph = model.graph

    subgraph_size = (len(graph.node) + n - 1)//n # ceiling of len(graph.node)/n
    assert subgraph_size >= len(graph.input), "subgraph size too small to fit all inputs in first subgraph"

    # TODO: implementation

def split_graph_half(model: ModelProto, is_qonnx: bool = True):
    """
    split the input graph in 2 subgraphs that can be connected in a single list to form the original graph
    """
    graph = model.graph

    print("\noriginal inputs:")
    print([i.name for i in graph.input])

    print("\noriginal initializers:")
    print([i.name for i in graph.initializer])

    mw = OnnxModel(model)

    subgraph_size = math.ceil(len(graph.node) / 2)
    
    # sort nodes topologically (in reverse)
    out_degrees = {node.name: 0 for node in graph.node}
    for node in mw.nodes.values():
        for in_edge in node.input:  # reverse graph by using in_edge rather than out_edge
            parent = mw.edges[in_edge][0]
            if parent:  # parent is None for input edges of the original graph
                out_degrees[parent] += 1

    queue = deque([node_name for node_name in out_degrees if out_degrees[node_name] == 0])
    subgraph2_nodes = []
    subgraph1_inputs = {**mw.inputs}
    subgraph2_inputs: dict[str, ValueInfoProto] = {}    # input edges in subgraph2 from original graph's input, connection edges excluded
    subgraph2_input_nodes: set[str] = set()
    while len(subgraph2_nodes) < subgraph_size or len(queue) != 1: # stop when there is a single node in queue
        node_name = queue.popleft()
        node = mw.nodes[node_name]
        subgraph2_nodes.append(node_name)

        # update subgraph inputs
        for in_edge in node.input:
            if in_edge in mw.inputs:
                subgraph2_inputs[in_edge] = mw.inputs[in_edge]
                subgraph1_inputs.pop(in_edge)

        # Update subgraph2 inputs by inserting current node and removing its child
        subgraph2_input_nodes.add(node_name)
        for out_edge in node.output:
            child_nodes = mw.edges[out_edge][1]
            for child in child_nodes:
                if child in subgraph2_input_nodes:
                    subgraph2_input_nodes.remove(child)
            # update subgraph inputs

        # continue topological sort
        for in_edge in node.input:
            parent = mw.edges[in_edge][0]
            if parent in out_degrees:
                out_degrees[parent] -= 1
                if out_degrees[parent] == 0:
                    queue.append(parent)

    # enforce splitting happens after a MultiThreshold node
    for node_name in subgraph2_input_nodes:
        node = mw.nodes[node_name]

        # move node to subgraph1 if conditions are met
        if node.op_type == "MultiThreshold" or (node.op_type == "Quant" and not get_nodeattr(node, "signed").i):
            # update subgraph2_nodes
            ind = -1
            for i in range(len(subgraph2_nodes)):
                if mw.nodes[subgraph2_nodes[i]].name == node_name:
                    ind = i
                    break
            assert ind >= 0
            subgraph2_nodes.pop(ind)

            # assuming that a MultiThreshold node won't be an input node in the original graph,
            # no need to update subgraph1_inputs or subgraph2_inputs

            # update subgraph2_input_nodes
            subgraph2_input_nodes.remove(node_name)
            for out_edge in node.output:
                for child in mw.edges[out_edge][1]:
                    subgraph2_input_nodes.add(child)
    print("\nsubgraph2 input nodes:")
    print(subgraph2_input_nodes)

    subgraph1_nodes = set(mw.nodes.keys()) - set(subgraph2_nodes)

    if len(subgraph1_nodes) == 0:
        print("Subgraph1 empty, no splitting performed")
        exit(-1)

    # ------ group nodes into subgraphs of size subgraph_size -------------

    subgraph1_initializer: dict[str, TensorProto] = {}
    for node in [mw.nodes[node_name] for node_name in subgraph1_nodes]:
        for edge in node.input:
            if edge in mw.initializers:
                subgraph1_initializer[edge] = mw.initializers[edge]
    print(f"\nsubgraph1 initializers ({sum(i.ByteSize() for i in subgraph1_initializer.values())} bytes):")
    print([i for i in subgraph1_initializer.keys()])
    
    subgraph2_initializer: dict[str, TensorProto] = {}
    for node in [mw.nodes[node_name] for node_name in subgraph2_nodes]:
        for edge in node.input:
            if edge in mw.initializers:
                subgraph2_initializer[edge] = mw.initializers[edge]
    print(f"\nsubgraph2 initializers ({sum(i.ByteSize() for i in subgraph2_initializer.values())} bytes):")
    print([i for i in subgraph2_initializer.keys()])


    # find connection edges between two subgraphs
    connection_edges = set()
    for node_name in subgraph2_input_nodes:
        node = mw.nodes[node_name]
        for in_edge in node.input:
            if in_edge not in subgraph2_initializer and mw.edges[in_edge][0] not in set(subgraph2_nodes):
                connection_edges.add(in_edge)
    print("\nconnection_edges:")
    print([*connection_edges])

    # construct subgraph1 output ValueInfoProtos
    subgraph1_output_value_infos = []
    for edge_value_info in mw.value_infos:
        if edge_value_info.name in connection_edges:
            subgraph1_output_value_infos.append(edge_value_info)

    # make subgraph1
    subgraph1 = helper.make_graph(
        nodes=[mw.nodes[node_name] for node_name in subgraph1_nodes],
        name="subgraph1",
        inputs=subgraph1_inputs.values(),
        outputs=subgraph1_output_value_infos,
        initializer=subgraph1_initializer.values(),
        value_info=[vi for vi in mw.value_infos if all(vi.name not in d for d in [connection_edges, subgraph1_inputs])])
    subgraph1.quantization_annotation.extend(graph.quantization_annotation) # man! this is hard to notice

    # make subgraph2
    subgraph2 = helper.make_graph(
        nodes=[mw.nodes[node_name] for node_name in subgraph2_nodes],
        name="subgraph2",
        inputs=subgraph1_output_value_infos + [*subgraph2_inputs.values()],
        outputs=graph.output,
        initializer=subgraph2_initializer.values(),
        value_info=[vi for vi in mw.value_infos if all(vi.name not in d for d in [connection_edges, subgraph2_inputs])])
    subgraph2.quantization_annotation.extend(graph.quantization_annotation)

    return (
        helper.make_model(subgraph1),
        helper.make_model(subgraph2))

if __name__ == "__main__":
    model_name = "cnv_1w1a_gtsrb"
    with open(f"onnx/{model_name}.onnx", "rb") as f:
        model = onnx.load(f)
        g1, g2 = split_graph_half(model)
        onnx.save(g1, f"onnx/{model_name}-g1.onnx")
        onnx.save(g2, f"onnx/{model_name}-g2.onnx")



