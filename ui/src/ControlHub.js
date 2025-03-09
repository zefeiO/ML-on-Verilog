import React, { useState } from 'react';
import { Button } from "./components/ui/button";
import { Card } from "./components/ui/card";
import { Input } from "./components/ui/input";
import ReactFlow, { MiniMap, Controls, Background, useNodesState, useEdgesState } from 'reactflow';
import 'reactflow/dist/style.css';
import "./index.css";

const initialNodes = [
  { id: "1", data: { label: "PC" }, position: { x: 200, y: 100 } },
  { id: "2", data: { label: "FPGA 1" }, position: { x: 100, y: 200 } },
  { id: "3", data: { label: "FPGA 2" }, position: { x: 300, y: 200 } }
];

const initialEdges = [
  { id: "e1-2", source: "1", target: "2" },
  { id: "e2-3", source: "2", target: "3" },
  { id: "e3-1", source: "3", target: "1" }
];


const ControlHub = () => {
  const [activeTab, setActiveTab] = useState('Deployment');
  const [selectedNodes, setSelectedNodes] = useState({});
  const [nodes, setNodes, onNodesChange] = useNodesState(initialNodes);
  const [edges, setEdges, onEdgesChange] = useEdgesState(initialEdges);

  // State for the user's chosen model
  const [selectedModel, setSelectedModel] = useState('');

  //progress bar 
  const [progressValue, setProgressValue] = useState(0);
  const [started, setStarted] = useState(false);

  const [accuracy, setAccuracy] = useState(0);

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

  const sendTrigger = async () => {
    try {
      // pc main server runs on port 8002 
      const response = await fetch("http://127.0.0.1:8002/trigger", {
        method: "POST",
      });
      if (response.ok) {
        console.log(`Trigger sent successfully. Response: ${await response.text()}`);
      } else {
        console.error("Failed to send trigger.");
      }
    } catch (error) {
      console.error("Error sending trigger:", error);
    }
  };


  const pollProgress = async () => {
    try {
      const response = await fetch("http://localhost:8002/progress");
      if (response.ok) {
        const data = await response.json();
        // data.progress is a value from 0 to 1, convert it to percentage.
        setProgressValue(data.progress * 100);
        setAccuracy(data.accuracy);
      } else {
        console.error("Failed to fetch progress.");
      }
    } catch (error) {
      console.error("Error fetching progress:", error);
    }
  };


  const sendDeploy = async (modelName) => {
    try {
      const response = await fetch("http://127.0.0.1:8002/deploy", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ "model": modelName })
      });
      if (response.ok) {
        console.log(`Deployment signal sent successfully for model ${modelName}.`);
      } else {
        console.error("Failed to send deployment signal.");
      }
    } catch (error) {
      console.error("Error sending deployment signal:", error);
    }
  };


  React.useEffect(() => {
    if (started) {
      const interval = setInterval(() => {
        pollProgress();
      }, 200);
      return () => clearInterval(interval);
    }
  }, [started]);

  // Handle deploy button click
  const handleDeployClick = () => {
    if (!selectedModel) {
      alert("Please select a model first.");
      return;
    }

    sendDeploy(selectedModel);
    // deploy(selectedModel);
  };

  const handleStartClick = () => {
    console.log("Start button clicked");
    sendTrigger();
    setStarted(true);
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
            <option value="cybsec">cybsec</option>
            <option value="kws-preproc">kws-preproc</option>
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
          <Button className="button" onClick={handleStartClick} style={{ marginLeft: '10px' }}>
            Start
          </Button>
        </div>
        <div className="mt-4">
          <p>Progress: {progressValue.toFixed(0)}%</p>
          <progress value={progressValue} max="100" style={{ width: '100%' }}></progress>
          {progressValue >= 100 && (
            <p>Final Accuracy: {accuracy.toFixed(2)}</p>
          )}
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
