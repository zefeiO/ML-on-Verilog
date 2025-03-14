import sys
import asyncio
from server import Server

if __name__ == "__main__":
    port, next_host, next_port = int(sys.argv[1]), sys.argv[2], int(sys.argv[3])
    server = Server("0.0.0.0", port, False, next_host, next_port)
    asyncio.run(server.start())
