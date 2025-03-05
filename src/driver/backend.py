import asyncio
import aiohttp_cors
from aiohttp import web
import os
import io
import zipfile
import pickle
import struct
from common import Message

async def send_model(host, port, deployment_dir):
    if not os.path.isdir(deployment_dir):
        print(f"Directory {deployment_dir} doesn't exist!")
        return
    
    zip_buffer = io.BytesIO()

    # Create a ZIP file in the buffer
    with zipfile.ZipFile(zip_buffer, 'w', zipfile.ZIP_DEFLATED) as zip_file:
        # Walk through the directory
        for root, dirs, files in os.walk(deployment_dir):
            for file in files:
                file_path = os.path.join(root, file)
                # Calculate the archive name (relative path inside the ZIP)
                archive_name = os.path.relpath(file_path, start=deployment_dir)
                zip_file.write(file_path, arcname=archive_name)

    # serialize message
    zip_data = zip_buffer.getvalue()
    msg = Message("model", zip_data)
    msg_buf = pickle.dumps(msg)
    msg_buf = struct.pack("!I", len(msg_buf)) + msg_buf

    try:
        # Establish a connection to the host and port
        reader, writer = await asyncio.open_connection(host, port)
        print(f"[Info] Sender connected to {host}:{port}")

        # Send the bytes data
        writer.write(msg_buf)
        await writer.drain()
        print(f"Sent {len(msg_buf)} bytes")

        print("[Info] Sender waiting for deployment completion...")
        await reader.read()
        print("[Info] Deployment completion received!")

        writer.close()
        await writer.wait_closed()
        print("[Info] Connection closed.")
    except ConnectionRefusedError:
        print(f"[Error] Failed to connect to {host}:{port}. Connection refused.")
    except asyncio.TimeoutError:
        print(f"[Error] Connection to {host}:{port} timed out.")
    except Exception as e:
        print(f"[Error] Expected error: {e}")

class backend:
    def __init__(self, host: str, port: int, trigger_condition: asyncio.Condition, progress, pc_server):
        self.host = host
        self.port = port
        self.trigger_condition = trigger_condition
        self.pc_server = pc_server
        self.app = web.Application()
        self.app.router.add_post("/deploy", self.deploy_handler)
        self.app.router.add_post('/trigger', self.trigger_handler)
        self.app.router.add_get('/progress', self.progress_handler)

        self.cors = aiohttp_cors.setup(self.app, defaults={
        "*": aiohttp_cors.ResourceOptions(
                allow_credentials=True,
                expose_headers="*",
                allow_headers="*"
            )
        })

        for route in list(self.app.router.routes()):
            self.cors.add(route)

    async def trigger_handler(self, request: web.Request) -> web.Response:
        print("[Info] Received HTTP trigger from UI process.")
        if self.deploy1.done() and self.deploy2.done():
            async with self.trigger_condition:
                self.trigger_condition.notify_all()  # Unblock pc_send
            return web.Response(text="OK")
        return web.Response(text="Deployment not ready yet")
    
    async def deploy_handler(self, request):
        print("[Info] Received HTTP deploy from UI process.")
        self.deploy1 = asyncio.create_task(send_model("192.168.2.98", 12345, "deploy/cybsec-g1"))
        self.deploy2 = asyncio.create_task(send_model("192.168.2.99", 12346, "deploy/cybsec-g2"))
        return web.Response(text="OK")

    async def progress_handler(self, request: web.Request) -> web.Response:
        progress_value = self.pc_server.progress.cnt / self.pc_server.progress.N if self.pc_server.progress.N else 0
        return web.json_response({
            "progress": progress_value,
            "accuracy": self.pc_server.progress.acc
        })

    async def start(self):
        runner = web.AppRunner(self.app)
        await runner.setup()
        site = web.TCPSite(runner, self.host, self.port)
        await site.start()
        print(f"[Info] Web server started on http://{self.host}:{self.port}")
        while True:
            await asyncio.sleep(3600)
