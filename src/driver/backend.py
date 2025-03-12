import asyncio
import io
import aiohttp_cors
from aiohttp import web
from scipy.io import wavfile
import numpy as np
from PIL import Image

from server import Server
from common import send_model, get_acc, stream_dataset, KWS_LABEL_MAPPING, GTSRB_LABEL_MAPPING

DEMO_SAMPLE_CNT = 1000


class Progress:
    def __init__(self, N):
        self.N = N
        self.cnt = 0
        self.acc = 0


class Backend:

    def __init__(self, host: str, port: int, board_port, next_board_host, next_board_port):
        self.host = host
        self.port = port
        self.app = web.Application()
        self.app.router.add_post("/deploy", self.deploy_handler)
        self.app.router.add_get("/is_ready", self.is_ready_handler)
        self.app.router.add_get("/dataset_info", self.dataset_info_handler)
        self.app.router.add_post("/get_sample", self.get_sample_handler)
        self.app.router.add_post("/inference", self.inference_handler)
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

        self.server = Server(host, board_port, True, next_board_host, next_board_port)
        self.server_task = None
        self.board_port = board_port
        self.next_board_host = next_board_host
        self.next_board_port = next_board_port
        self.model_name = None
        self.load_dataset_task = None
        self.dataset = None
        self.progress = Progress(0)
        self.inference_result = None


    async def start(self):
        self.server_task = asyncio.create_task(self.server.start())

        runner = web.AppRunner(self.app)
        await runner.setup()
        site = web.TCPSite(runner, self.host, self.port)
        await site.start()
        print(f"[Info] Web server started on http://{self.host}:{self.port}")
        while True:
            await asyncio.sleep(3600)


    async def deploy_handler(self, request: web.Request):
        req_json = await request.json()
        model_name = req_json.get("model")
        g1_model_path = "deploy/" + model_name + "-g1"
        g2_model_path = "deploy/" + model_name + "-g2"
        self.model_name = model_name
        self.progress = Progress(0)

        print("[Info] Received HTTP deploy from UI process.")
        if self.model_name == "gtsrb":
            model_path = "deploy/gtsrb-deploy"
            self.deploy1 = asyncio.create_task(send_model("192.168.2.99", 12346, model_path))
        else:
            self.deploy1 = asyncio.create_task(send_model("192.168.2.98", 12345, g1_model_path))
            self.deploy2 = asyncio.create_task(send_model("192.168.2.99", 12346, g2_model_path))
        self.load_dataset(model_name, DEMO_SAMPLE_CNT)
        return web.Response(text="OK")
    

    async def is_ready_handler(self, request: web.Request):
        if self.model_name == "gtsrb":
            result = self.deploy1.done()
        else:
            result = self.deploy1.done() and self.deploy2.done()
        return web.json_response({
            "isReady": result
        })
    

    async def dataset_info_handler(self, request: web.Request):
        '''returns the metadata of the current model's dataset (e.g. sample cnt, file type)'''
        file_type = "jpg" if self.model_name == "gtsrb" else "wav"
        return web.json_response({
            "sampleCnt": DEMO_SAMPLE_CNT, 
            "fileType": file_type
        })


    async def get_sample_handler(self, request: web.Request):
        '''returns the sample from dataset according to the index'''
        req_json = await request.json()
        file_type = req_json.get("fileType")
        idx = req_json.get("sampleIdx")

        data = self.dataset_sample(idx)
        if data is None:
            return web.Response(status=404, text="sample not found")
        
        buffer = io.BytesIO()
        if self.model_name == "kws-preproc":
            wavfile.write(buffer, 16000, data)
            content_type = "audio/wave"
            filename = "output.wav"
        else:
            data.save(buffer, format="JPEG")
            content_type = "image/jpeg"
            filename = "output.jpg"
        
        buffer.seek(0)
        return web.Response(
            body=buffer.read(),
            content_type=content_type,
            headers={'Content-Disposition': f'inline; filename="{filename}"'}
        )


    async def inference_handler(self, request: web.Request):
        '''schedules inference for the specified sample'''
        req_json = await request.json()
        idx = req_json.get("sampleIdx")
        asyncio.create_task(self.inference(idx))
        return web.Response(text="OK")


    async def progress_handler(self, request: web.Request) -> web.Response:
        progress_value = self.progress.cnt / self.progress.N if self.progress.N else 0
        return web.json_response({
            "progress": progress_value,
            "accuracy": get_acc(self.progress.acc, self.model_name),
            "result": self.inference_result # TODO: check if result can be decoded as string
        }) 


    ############## Control APIs #################
    def load_dataset(self, model_name, sample_cnt):
        '''Invoked in deploy_handler to be executed alongside model deployment'''
        self.model_name = model_name

        async def __load_dataset_task():
            if model_name == "cybsec":
                test_dataset = np.load("onnx/data/cybsec-in.npz")["test"][:sample_cnt]
                test_imgs = test_dataset[:, :-1]
                test_imgs = np.pad(test_imgs.astype(np.float32), [(0, 0), (0, 7)], mode="constant")
                labels = test_dataset[:, -1].astype(np.float32)

                samples = test_imgs.reshape(sample_cnt, 1, -1)    # shape=(sample_cnt, 1, 600)
                files = samples
                labels = labels.reshape(sample_cnt, 1)    # shape=(sample_cnt, 1)
            elif model_name == "kws-preproc":
                test_dataset = np.load("onnx/data/kws-in.npy")[:sample_cnt]
                files = np.load("onnx/data/kws-wav.npy")[:sample_cnt]
                test_labels = np.load("onnx/data/kws-out.npy")[:sample_cnt]

                samples = test_dataset.reshape(sample_cnt, 1, -1)  # shape=(sample_cnt, 1, 490)
                labels = test_labels.reshape(sample_cnt, 1)        # shape=(sample_cnt, 1)
            elif model_name == "gtsrb":
                samples = np.load("onnx/data/gtsrb-in.npy")[:sample_cnt].transpose(0, 1, 3, 4, 2)  # shape=(sample_cnt, 32, 32, 3)
                labels = np.load("onnx/data/gtsrb-out.npy")[:sample_cnt].reshape(-1, 1)
                files = None
            self.dataset = {"samples": samples, "files": files, "labels": labels}

        self.load_dataset_task = asyncio.create_task(__load_dataset_task())


    def dataset_sample(self, idx):
        if self.load_dataset_task is None or not self.load_dataset_task.done():
            return None
        if self.model_name != "gtsrb":
            return self.dataset["files"][idx]
        else:
            image_path = f"onnx/data/images/{idx:05d}.ppm"
            return Image.open(image_path)


    async def inference(self, sample_idx):
        await self.load_dataset_task

        if sample_idx != -1:
            self.progress = Progress(1)
            sample_set = self.dataset["samples"][sample_idx:sample_idx+1, :]
            label_set = self.dataset["labels"][sample_idx:sample_idx+1, :]
        else:
            self.progress = Progress(len(self.dataset["samples"]))
            sample_set = self.dataset["samples"]
            label_set = self.dataset["labels"]

        async with asyncio.TaskGroup() as tg:
            if self.model_name == "gtsrb":
                tg.create_task(stream_dataset("192.168.2.99", 12346, sample_set))
            else:
                tg.create_task(stream_dataset(self.next_board_host, self.next_board_port, sample_set))
            tg.create_task(self.pc_recv(label_set, sample_idx != -1))


    async def pc_recv(self, labels, save_single_output=False):
        expected_output_it = iter(labels)
        while True:
            try:
                label = next(expected_output_it)
            except:
                break

            result = await self.server.job_queue.get()

            # Post-processing
            if self.model_name == "gtsrb":
                result = np.argmax(result)

            if save_single_output:
                if self.model_name == "kws-preproc":
                    self.inference_result = KWS_LABEL_MAPPING[result.astype(np.int32)[0, 0]]
                elif self.model_name == "gtsrb":
                    self.inference_result = GTSRB_LABEL_MAPPING[result]
                else:
                    self.inference_result = result

            correct = (result == label).all()
            acc, cnt = self.progress.acc, self.progress.cnt
            self.progress.acc = (acc*cnt + correct)/(cnt + 1)
            self.progress.cnt = cnt + 1
