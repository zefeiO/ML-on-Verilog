import asyncio
import aiohttp_cors
from aiohttp import web
from common import send_model, get_acc


class Backend:
    def __init__(self, host: str, port: int, trigger_condition: asyncio.Condition, pc_server):
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
    
    async def deploy_handler(self, request: web.Request):
        req_json = await request.json()
        model_name = req_json.get("model")
        g1_model_path = "deploy/" + model_name + "-g1"
        g2_model_path = "deploy/" + model_name + "-g2"
        self.pc_server.model_name = model_name

        print("[Info] Received HTTP deploy from UI process.")
        self.deploy1 = asyncio.create_task(send_model("192.168.2.98", 12345, g1_model_path))
        self.deploy2 = asyncio.create_task(send_model("192.168.2.99", 12346, g2_model_path))
        return web.Response(text="OK")

    async def progress_handler(self, request: web.Request) -> web.Response:
        progress_value = self.pc_server.progress.cnt / self.pc_server.progress.N if self.pc_server.progress.N else 0
        return web.json_response({
            "progress": progress_value,
            "accuracy": get_acc(self.pc_server.progress.acc)
        })

    async def start(self):
        runner = web.AppRunner(self.app)
        await runner.setup()
        site = web.TCPSite(runner, self.host, self.port)
        await site.start()
        print(f"[Info] Web server started on http://{self.host}:{self.port}")
        while True:
            await asyncio.sleep(3600)
