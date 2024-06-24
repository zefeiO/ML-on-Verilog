import os
import subprocess
import sys 
from dotenv import load_dotenv


def verilate_and_run(model_dir: str):
    # Output directory
    sim_dir = os.getenv("PROJECT_ROOT") + "/simulation"
    design_dir = os.getenv("PROJECT_ROOT") + "/circuit_out"
    obj_dir = os.getenv("PROJECT_ROOT") + "/simulation/obj_dir"
    log_path = os.getenv("PROJECT_ROOT") + "/simulation/log/out.log"


    os.makedirs(obj_dir, exist_ok=True)

    # Verilog macros
    macros = {
        "MEM_PATH": f"\\\"{sim_dir}/hex/test.x\\\"",  # Quotes need to be part of the macro
        "IN_ENTRY_W": 32,
        "OUT_ENTRY_W": 32,
        "IN_DIM": 1,
        "OUT_DIM": 1,
        "SAMPLE_CNT": 1,
    }

    # Verilate the Verilog file under design and simulation directory
    # verilate_cmd = f"verilator --binary {sim_dir}/*.v {design_dir}/*.v --Mdir {obj_dir} --prefix VTop"
    verilate_cmd = f"verilator --binary {sim_dir}/*.v {model_dir}/*.v --Mdir {obj_dir} --prefix VTop"
    for name, value in macros.items():
        verilate_cmd += f" +define+{name}={value}"

    print(verilate_cmd)
    subprocess.run(verilate_cmd, shell=True, check=True)

    with open(log_path, "w+") as f:
        subprocess.run(f"{obj_dir}/VTop", stdout=f)

if __name__ == "__main__":
    load_dotenv("./.env.local")
    verilate_and_run(os.getenv("PROJECT_ROOT") + "/common/example_mlp")
