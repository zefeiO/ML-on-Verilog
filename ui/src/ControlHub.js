import React, { useState } from 'react';
import { Button } from "./components/ui/button";
import { Card } from "./components/ui/card";
import { Input } from "./components/ui/input";
import ReactFlow, { MiniMap, Controls, Background, useNodesState, useEdgesState } from 'reactflow';
import 'reactflow/dist/style.css';
import "./index.css";

const ControlHub = () => {
  const [activeTab, setActiveTab] = useState('Deployment');
  const [selectedNodes, setSelectedNodes] = useState({});
  const [nodes, setNodes, onNodesChange] = useNodesState([]);
  const [edges, setEdges, onEdgesChange] = useEdgesState([]);

  // State for the user's chosen model
  const [selectedModel, setSelectedModel] = useState('');

  // Add new node with unique ID & random position
  const addNode = () => {
    setNodes(prevNodes => [
      ...prevNodes,
      {
        id: `node-${prevNodes.length}`,
        data: { label: `Node ${prevNodes.length}` },
        position: { x: Math.random() * 400, y: Math.random() * 400 },
        draggable: true,
      }
    ]);
  };

  // Rename a node
  const renameNode = (nodeId, newLabel) => {
    setNodes(prevNodes =>
      prevNodes.map(node =>
        node.id === nodeId ? { ...node, data: { ...node.data, label: newLabel } } : node
      )
    );
  };

  // Add edge between nodes
  const addEdge = (sourceId, targetId) => {
    if (!edges.some(edge => edge.source === sourceId && edge.target === targetId)) {
      setEdges(prevEdges => [
        ...prevEdges,
        { id: `edge-${sourceId}-${targetId}`, source: sourceId, target: targetId }
      ]);
    }
  };

  // Handle node selection changes
  const handleSelectChange = (nodeId, value) => {
    setSelectedNodes(prev => ({ ...prev, [nodeId]: value }));
    if (value) addEdge(nodeId, value);
  };

  const deploy = (modelName) => {
    // TODO: Call backend deploy function 
    console.log(`Deploying model: ${modelName}`);
  };

  // Handle deploy button click
  const handleDeployClick = () => {
    if (!selectedModel) {
      alert("Please select a model first.");
      return;
    }
    deploy(selectedModel);
  };

  // Deployment Page
  const renderDeploymentPage = () => {
    return (
      <div>
        {/* Model Selection Section */}
        <h2 className="text-2xl font-bold mb-4">Select & Configure Deployment</h2>
        <Card className="p-4 mb-6">
          <p className="mb-2">Choose which ONNX model to deploy:</p>
          <select
            className="input mb-4"
            value={selectedModel}
            onChange={(e) => setSelectedModel(e.target.value)}
          >
            <option value="">-- Select a Model --</option>
            <option value="ModelA">Model A</option>
            <option value="ModelB">Model B</option>
          </select>
        </Card>

        {/* Deployment Topology Section */}
        <h3 className="text-xl font-bold mb-4">Define Deployment Topology</h3>
        <Card className="p-4">
          <p className="mb-2">Add and connect deployment nodes:</p>
          <Button className="button" onClick={addNode}>+ Add Node</Button>
          <div className="mt-4">
            {nodes.map(node => (
              <div key={node.id} className="node-container">
                <Input
                  type="text"
                  value={node.data.label}
                  onChange={(e) => renameNode(node.id, e.target.value)}
                  className="input"
                />
                <select
                  value={selectedNodes[node.id] || ""}
                  onChange={(e) => handleSelectChange(node.id, e.target.value)}
                  className="input"
                >
                  <option value="">Select child node</option>
                  {nodes.filter(n => n.id !== node.id).map(n => (
                    <option key={n.id} value={n.id}>{n.data.label}</option>
                  ))}
                </select>
              </div>
            ))}
          </div>

          <div className="react-flow-container">
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
        </Card>
        <div className="mt-6">
          <Button className="button" onClick={handleDeployClick}>
            Deploy
          </Button>
        </div>
      </div>
    );
  };

  const sidebarItems = ['Compilation', 'Simulation', 'Deployment'];

  return (
    <div className="flex h-screen">
      {/* Sidebar */}
      <aside className="sidebar">
        <h1 className="sidebar-title">Control Hub</h1>
        <nav>
          <ul>
            {sidebarItems.map(item => (
              <li key={item} className="mb-2">
                <button
                  onClick={() => setActiveTab(item)}
                  className={`sidebar-button ${activeTab === item ? 'active' : ''}`}
                >
                  {item}
                </button>
              </li>
            ))}
          </ul>
        </nav>
      </aside>

      {/* Main Content */}
      <main className="main-content">
        {activeTab === 'Deployment' && renderDeploymentPage()}
        {activeTab === 'Compilation' && (
          <h2 className="text-2xl font-bold">Compilation Page (Content TBD)</h2>
        )}
        {activeTab === 'Simulation' && (
          <h2 className="text-2xl font-bold">Simulation Page (Content TBD)</h2>
        )}
      </main>
    </div>
  );
};

export default ControlHub;
