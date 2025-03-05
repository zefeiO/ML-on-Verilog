#!/bin/bash
# deploy_servers.sh

# Start Board main server for FPGA 1 on port 8000
python ../../src/driver/board_main.py 8000  &
BOARD1_PID=$!
echo "Board main server 1 started with PID $BOARD1_PID"

# Start Board main server for FPGA 2 on port 8001
python ../../src/driver/board_main.py 8001  &
BOARD2_PID=$!
echo "Board main server 2 started with PID $BOARD2_PID"

# Start PC main server in background on port 8002
python ../../src/driver/pc_main.py 0.0.0.0 8002 &
PC_PID=$!
echo "PC main server started with PID $PC_PID"

echo "Waiting for servers to initialize..."
sleep 5

# This assumes the PC main server has an HTTP endpoint (e.g., /deploy) that accepts a POST request.
# echo "Sending deployment signal to PC main server..."
curl -X POST http://localhost:8002/progress -H "Content-Type: application/json" -d '{"model": "ModelA"}'

echo "Deployment signal sent. All servers are now running."
