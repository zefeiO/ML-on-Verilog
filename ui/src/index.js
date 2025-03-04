import React from 'react';
import ReactDOM from 'react-dom/client';  // Use createRoot from react-dom/client
import ControlHub from './ControlHub';
import './index.css';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <ControlHub />
  </React.StrictMode>
);
