import asyncio
from aiohttp import web

class backend:
    def __init__(self, host: str, port: int, trigger_condition: asyncio.Condition, progress):
        self.host = host
        self.port = port
        self.trigger_condition = trigger_condition
        self.progress = progress
        self.app = web.Application()
        self.app.router.add_post('/trigger', self.trigger_handler)
        self.app.router.add_get('/progress', self.progress_handler)

    async def trigger_handler(self, request: web.Request) -> web.Response:
        print("[Info] Received HTTP trigger from UI process.")
        async with self.trigger_condition:
            self.trigger_condition.notify_all()  # Unblock pc_send
        return web.Response(text="OK")

    async def progress_handler(self, request: web.Request) -> web.Response:
        progress_value = self.progress.cnt / self.progress.N if self.progress.N else 0
        return web.json_response({
            "progress": progress_value,
            "accuracy": self.progress.acc
        })

    async def start(self):
        runner = web.AppRunner(self.app)
        await runner.setup()
        site = web.TCPSite(runner, self.host, self.port)
        await site.start()
        print(f"[Info] Web server started on http://{self.host}:{self.port}")
        while True:
            await asyncio.sleep(3600)
