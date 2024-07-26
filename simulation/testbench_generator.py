import os
import re
import shutil

# Function to move Verilog files to a new directory
def move_verilog_files(destination_dir):
    if not os.path.exists(destination_dir):
        os.makedirs(destination_dir)

    for root, dirs, files in os.walk("."):
        for file in files:
            if file.endswith(".v") or file.endswith(".sv"):
                source_path = os.path.join(root, file)
                destination_path = os.path.join(destination_dir, file)
                print("Moving {} to {}".format(source_path, destination_path))
                shutil.move(source_path, destination_path)

# Extract input and output ports from the Verilog code
def extract_ports(verilog_code, target_module):
    module_match = re.search(r'module\s+' + re.escape(target_module) + r'\s*([\s\S]*?)\);\s*endmodule', verilog_code)
    if not module_match:
        print("Module {} not found in the provided Verilog code.".format(target_module))
        return target_module, [], []
    
    ports_section = module_match.group(1)
    ports = re.findall(r'(input|output)\s*(?:reg|wire)?\s*(\[\d+:\d+\]\s*)?(\w+)', ports_section)
    
    input_ports = []
    output_ports = []
    for port in ports:
        port_type, port_width, port_name = port
        port_width = port_width.strip() if port_width else ''
        
        if port_type == 'input':
            input_ports.append((port_name, port_width))
        else:
            output_ports.append((port_name, port_width))
    
    return target_module, input_ports, output_ports

# Generate the testbench code
def generate_testbench(module_name, input_ports, output_ports):
    tb_code = '`timescale 1ns / 1ps\n\nmodule {}_tb;\n\n'.format(module_name)
    for port_name, port_width in input_ports:
        tb_code += '    reg {} {};\n'.format(port_width, port_name)
    for port_name, port_width in output_ports:
        tb_code += '    wire {} {};\n'.format(port_width, port_name)
    
    tb_code += '\n    {} uut (\n'.format(module_name)
    for port_name, _ in input_ports + output_ports:
        tb_code += '        .{}({}),\n'.format(port_name, port_name)
    tb_code = tb_code.rstrip(',\n') + '\n    );\n\n'
    
    tb_code += '    initial begin\n'
    for port_name, _ in input_ports:
        tb_code += '        {} = 0;\n'.format(port_name)
    tb_code += '        #100;\n'
    for port_name, _ in input_ports:
        if port_name.lower() == 'ap_clk':
            tb_code += '        {} = 0;\n'.format(port_name)
        elif port_name.lower() == 'ap_rst_n':
            tb_code += '        {} = 1;\n'.format(port_name)
        else:
            tb_code += '        {} = {};\n'.format(port_name, generate_initial_value(port_name))
    tb_code += '        #100;\n'
    tb_code += '        $finish;\n'
    tb_code += '    end\n\n'
    
    if any('clk' in port_name.lower() for port_name, _ in input_ports):
        tb_code += '    always #5 ap_clk = ~ap_clk;\n\n'
    
    tb_code += '    initial begin\n'
    tb_code += '        $monitor("Time: %0t'
    for port_name, _ in input_ports + output_ports:
        tb_code += ', {}: %h'.format(port_name)
    tb_code += '", $time'
    for port_name, _ in input_ports + output_ports:
        tb_code += ', {}'.format(port_name)
    tb_code += ');\n    end\n'

    tb_code += '    initial begin\n'
    tb_code += '        $dumpfile("dump.vcd");\n'
    tb_code += '        $dumpvars(0, {}_tb);\n'.format(module_name)
    tb_code += '    end\n'
    
    tb_code += 'endmodule\n'
    
    return tb_code

def generate_initial_value(port_name):
    if 'tvalid' in port_name.lower():
        return '1'
    elif 'tdata' in port_name.lower():
        return '32\'h12345678'  
    elif 'tready' in port_name.lower():
        return '1'
    else:
        return '0'

# Move Verilog files and change directory
destination_dir = "verilog_files"
move_verilog_files(destination_dir)
os.chdir(destination_dir)

# Specify the top-level module name and generate the testbench
top_module_name = 'finn_design'
verilog_file_path = 'finn_design.v'

with open(verilog_file_path, 'r') as f:
    verilog_code = f.read()

module_name, input_ports, output_ports = extract_ports(verilog_code, top_module_name)
testbench_code = generate_testbench(module_name, input_ports, output_ports)

testbench_file_path = '{}_tb.sv'.format(module_name)
with open(testbench_file_path, 'w') as f:
    f.write(testbench_code)

print("Generated testbench for {} in {}".format(module_name, testbench_file_path))

# Run Verilator and GTKWave
os.system("verilator --binary --cc --exe --trace -sv --timing --Wall --Wno-fatal -CFLAGS \"-std=c++20\" *.v *.sv -o finn_design_sim")

os.chdir("obj_dir")
os.system("./finn_design_sim")

if os.path.exists("dump.vcd"):
    os.system("gtkwave dump.vcd")
else:
    print("No VCD file generated.")
