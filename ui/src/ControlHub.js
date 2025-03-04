import React, { useState } from 'react';
import { Button } from "./components/ui/button";
import { Card } from "./components/ui/card";
import { Input } from "./components/ui/input";
import ReactFlow, { MiniMap, Controls, Background, useNodesState, useEdgesState } from 'reactflow';
import 'reactflow/dist/style.css';

const ControlHub = () => {
  const [activeTab, setActiveTab] = useState('Upload Model');
  const [selectedNodes, setSelectedNodes] = useState({});
  const [nodes, setNodes, onNodesChange] = useNodesState([]);
  const [edges, setEdges, onEdgesChange] = useEdgesState([]);

  const addNode = () => {
    const newNode = {
      id: `node-${nodes.length}`,
      data: { label: `Node ${nodes.length}` },
      position: { x: Math.random() * 400, y: Math.random() * 400 },
      draggable: true,
    };
    setNodes([...nodes, newNode]);
  };

  const renameNode = (nodeId, newLabel) => {
    setNodes(nodes.map(node => node.id === nodeId ? { ...node, data: { ...node.data, label: newLabel } } : node));
  };

  const addEdge = (sourceId, targetId) => {
    if (!edges.some(edge => edge.source === sourceId && edge.target === targetId)) {
      setEdges([...edges, { id: `edge-${sourceId}-${targetId}`, source: sourceId, target: targetId }]);
    }
  };

  const handleSelectChange = (nodeId, value) => {
    setSelectedNodes(prev => ({ ...prev, [nodeId]: value }));
    if (value) addEdge(nodeId, value);
  };

  const renderContent = () => {
    switch (activeTab) {
      case 'Upload Model':
        return (
          <div>
            <h2 className="text-2xl font-bold mb-4">Upload Model</h2>
            <Card className="p-4">
              <p className="mb-2">Select an ONNX model file to upload:</p>
              <Input type="file" className="mb-4" />
              <Button variant="default">Upload</Button>
            </Card>
          </div>
        );
      case 'Deployment':
        return (
          <div>
            <h2 className="text-2xl font-bold mb-4">Deployment</h2>
            <Card className="p-4">
              <p className="mb-2">Define deployment topology:</p>
              <Button variant="default" onClick={addNode}>+ Add Node</Button>
              <div className="mt-4">
                {nodes.map(node => (
                  <div key={node.id} className="border p-2 rounded mt-2">
                    <Input
                      type="text"
                      value={node.data.label}
                      onChange={(e) => renameNode(node.id, e.target.value)}
                      className="border p-2 rounded w-full mb-2"
                    />
                    <select
                      value={selectedNodes[node.id] || ""}
                      onChange={(e) => handleSelectChange(node.id, e.target.value)}
                      className="border p-2 rounded w-full"
                    >
                      <option value="">Select child node</option>
                      {nodes.filter(n => n.id !== node.id).map(n => (
                        <option key={n.id} value={n.id}>{n.data.label}</option>
                      ))}
                    </select>
                  </div>
                ))}
              </div>
              <div className="mt-4 h-96 border rounded bg-white">
                <ReactFlow 
                  nodes={nodes} 
                  edges={edges} 
                  onNodesChange={onNodesChange} 
                  onEdgesChange={onEdgesChange} 
                  fitView
                >
                  <MiniMap />
                  <Controls />
                  <Background />
                </ReactFlow>
              </div>
              <Button variant="default">Deploy</Button>
            </Card>
          </div>
        );
      default:
        return null;
    }
  };

  const sidebarItems = ['Upload Model', 'Compilation', 'Simulation', 'Deployment'];

  return (
    <div className="flex h-screen">
      <aside className="w-64 bg-gray-800 text-white p-6">
        <h1 className="text-3xl font-bold mb-8">Control Hub</h1>
        <nav>
          <ul>
            {sidebarItems.map(item => (
              <li key={item} className="mb-2">
                <button
                  onClick={() => setActiveTab(item)}
                  className={`w-full text-left py-2 px-4 rounded transition-colors ${
                    activeTab === item ? 'bg-gray-700' : 'hover:bg-gray-700'
                  }`}
                >
                  {item}
                </button>
              </li>
            ))}
          </ul>
        </nav>
      </aside>
      <main className="flex-1 p-8 bg-gray-100 overflow-auto">
        {renderContent()}
      </main>
    </div>
  );
};

export default ControlHub;
