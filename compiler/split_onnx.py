import math
from collections import deque, defaultdict
import onnx
from onnx import ModelProto, helper, shape_inference
from google.protobuf.text_format import MessageToString

def split_graph_linear(model: ModelProto, n: int):
    """
    split the input graph in n subgraphs that can be connected in a single list to form the original graph
    """
    graph = model.graph

    subgraph_size = (len(graph.node) + n - 1)//n # ceiling of len(graph.node)/n
    assert subgraph_size >= len(graph.input), "subgraph size too small to fit all inputs in first subgraph"

    # TODO: implementation

def split_graph_half(model: ModelProto):
    """
    split the input graph in 2 subgraphs that can be connected in a single list to form the original graph
    """
    graph = model.graph

    subgraph_size = math.ceil(len(graph.node) / 2)

    node_map = {node.name: node for node in graph.node}

    # extract edges
    edge_map = defaultdict(lambda: [None, set()])    # edge_name: [in_node, out_node]
    for node in graph.node:
        for in_edge in node.input:
            edge_map[in_edge][1].add(node.name) # set node as output of edge
        for out_edge in node.output:
            edge_map[out_edge][0] = node.name   # set node as input of edge
    
    # sort nodes topologically
    in_degrees = {node.name: 0 for node in graph.node}
    for node in node_map.values():
        for out_edge in node.output:
            for neighbour in edge_map[out_edge][1]:
                if neighbour in in_degrees:
                    in_degrees[neighbour] += 1

    queue = deque([node_name for node_name in in_degrees if in_degrees[node_name] == 0])

    subgraph1_nodes = []
    subgraph1_output_nodes: set[str] = set()
    while len(subgraph1_nodes) < subgraph_size:
        node_name = queue.popleft()
        node = node_map[node_name]
        subgraph1_nodes.append(node_name)

        # Update subgraph outputs by inserting current node and removing its parent
        subgraph1_output_nodes.add(node_name)
        for in_edge in node.input:
            parent_node = edge_map[in_edge][0]
            if parent_node in subgraph1_output_nodes:
                subgraph1_output_nodes.remove(parent_node)

        for out_edge in node.output:
            for neighbour in edge_map[out_edge][1]:
                if neighbour in in_degrees:
                    in_degrees[neighbour] -= 1
                    if in_degrees[neighbour] == 0:
                        queue.append(neighbour)
    
    subgraph2_nodes = [*queue] + [node_name for node_name in in_degrees if in_degrees[node_name] != 0]
    assert len(subgraph1_nodes) + len(subgraph2_nodes) == len(graph.node)

    # ------ group nodes into subgraphs of size subgraph_size -------------
    # get edge shapes using helper function
    shape_info = shape_inference.infer_shapes(model)

    # find connection edges between two subgraphs
    connection_edges = set()
    for node_name in subgraph1_output_nodes:
        node = node_map[node_name]
        for out_edge in node.output:
            connection_edges.add(out_edge)

    # construct subgraph1 output ValueInfoProtos
    subgraph1_output_value_infos = []
    for edge_value_info in shape_info.graph.value_info:
        if edge_value_info.name in connection_edges:
            subgraph1_output_value_infos.append(edge_value_info)

    # handle initializer (for coefficients)
    coeff_map = {}
    for coeff_proto in graph.initializer:
        coeff_map[coeff_proto.name] = coeff_proto

    subgraph1_initializer = []
    for node in [node_map[node_name] for node_name in subgraph1_nodes]:
        for edge in node.input:
            if edge in coeff_map:
                subgraph1_initializer.append(coeff_map[edge])

    subgraph2_initializer = []
    for node in [node_map[node_name] for node_name in subgraph1_nodes]:
        for edge in node.input:
            if edge in coeff_map:
                subgraph2_initializer.append(coeff_map[edge])

    # make subgraph1
    subgraph1 = helper.make_graph(
        nodes=[node_map[node_name] for node_name in subgraph1_nodes],
        name="subgraph1",
        inputs=graph.input,
        outputs=subgraph1_output_value_infos,
        initializer=subgraph1_initializer)

    # make subgraph2
    subgraph2 = helper.make_graph(
        nodes=[node_map[node_name] for node_name in subgraph2_nodes],
        name="subgraph2",
        inputs=subgraph1_output_value_infos,
        outputs=graph.output,
        initializer=subgraph2_initializer)

    return (
        helper.make_model(subgraph1),
        helper.make_model(subgraph2))
    

if __name__ == "__main__":
    with open("examples/adv_inception_v3_Opset16.onnx", "rb") as f:
        model = onnx.load(f)
        g1, g2 = split_graph_half(model)
        onnx.save(g1, "examples/g1.onnx")
        onnx.save(g2, "examples/g2.onnx")



