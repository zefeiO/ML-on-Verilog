import os
import subprocess
import sys


def verilate_and_run(sim_dir="simulation", design_dir="circuit_out", log_path="simulation/log/out.log"):
    # Output directory
    obj_dir = f"{sim_dir}/obj_dir"

    os.makedirs(obj_dir, exist_ok=True)

    # Verilate the Verilog file under design and simulation directory
    verilate_cmd = f"verilator --binary {sim_dir}/*.v {design_dir}/*.v --Mdir {obj_dir} --prefix VTop"
    print(verilate_cmd)
    subprocess.run(verilate_cmd, shell=True, check=True)

    with open(log_path, "w+") as f:
        subprocess.run(f"{obj_dir}/VTop", stdout=f)

if __name__ == "__main__":
    # if len(sys.argv) < 3:
    #     print("Usage: python verilate_run.py <sim_dir> <design_dir> <log_path>")
    #     sys.exit(1)

    verilate_and_run(*sys.argv[1:])
