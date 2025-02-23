import sys
import asyncio
from server import Server

if __name__ == "__main__":
    next_host, next_port = sys.argv[1], int(sys.argv[2])
    server = Server("0.0.0.0", 12345, False, next_host, next_port)

    loop = asyncio.get_event_loop()
    loop.run_until_complete(server.start())
    loop.close()