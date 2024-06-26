import os
import subprocess
import sys 
from dotenv import load_dotenv

SIM_DIR = "simulation"
OBJ_DIR = "simulation/obj_dir"
LOG_PATH = "simulation/log/out.log"

def verilate_and_run(model_dir: str):
    os.makedirs(OBJ_DIR, exist_ok=True)

    # Verilog macros
    macros = {
        "MEM_PATH": f"\\\"{SIM_DIR}/hex/test.x\\\"",  # Quotes need to be part of the macro
        "DATA_W": 32,
        "IN_DIM": 1,
        "L1_DIM": 3,
        "OUT_DIM": 1,
        "SAMPLE_CNT": 1,
    }

    # Verilate the Verilog file under design and simulation directory
    # verilate_cmd = f"verilator --binary {sim_dir}/*.v {design_dir}/*.v --Mdir {obj_dir} --prefix VTop"
    # verilate_cmd = f"verilator --binary {sim_dir}/*.v {model_dir}/*.v --Mdir {obj_dir} --prefix VTop"
    # verilate_cmd = f"verilator --binary {sim_dir}/model_dut.v --Mdir {obj_dir} --prefix VTop"
    verilate_cmd = f"verilator --binary {SIM_DIR}/*.v {model_dir}/*.v --Mdir {OBJ_DIR} --prefix VTop"
    for name, value in macros.items():
        verilate_cmd += f" +define+{name}={value}"

    print(verilate_cmd)
    subprocess.run(verilate_cmd, shell=True, check=True)

    with open(LOG_PATH, "w+") as f:
        subprocess.run(f"{OBJ_DIR}/VTop", stdout=f)

if __name__ == "__main__":
    load_dotenv(".env.local")

    if os.getenv("FYDP_ROOT") == "":
        print("Environment variable FYDP_ROOT not found!")
        exit(-1)

    verilate_and_run("common/example_mlp")
