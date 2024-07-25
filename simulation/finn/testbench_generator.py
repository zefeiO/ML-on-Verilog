import re
import os

def extract_ports(verilog_code, target_module):
    # Find the module definition
    module_match = re.search(r'module\s+' + re.escape(target_module) + r'\s*([\s\S]*?)\);\s*endmodule', verilog_code)
    if not module_match:
        print("Module {} not found in the provided Verilog code.".format(target_module))
        return target_module, [], []
    
    ports_section = module_match.group(1)
    
    # Find all input and output ports
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

def generate_testbench(module_name, input_ports, output_ports):
    tb_code = '`timescale 1ns / 1ps\n\nmodule {}_tb;\n\n'.format(module_name)
    
    # Declare input and output signals
    for port_name, port_width in input_ports:
        tb_code += '    reg {} {};\n'.format(port_width, port_name)
    for port_name, port_width in output_ports:
        tb_code += '    wire {} {};\n'.format(port_width, port_name)
    
    tb_code += '\n    {} uut (\n'.format(module_name)
    for port_name, _ in input_ports + output_ports:
        tb_code += '        .{}({}),\n'.format(port_name, port_name)
    tb_code = tb_code.rstrip(',\n') + '\n    );\n\n'
    
    # Initialize inputs and simulation
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
    
    # Clock generation if a clock signal is present
    if any('clk' in port_name.lower() for port_name, _ in input_ports):
        tb_code += '    always #5 ap_clk = ~ap_clk;\n\n'
    
    # Monitor output signals
    tb_code += '    initial begin\n'
    tb_code += '        $monitor("Time: %0t'
    for port_name, _ in input_ports + output_ports:
        tb_code += ', {}: %h'.format(port_name)
    tb_code += '", $time'
    for port_name, _ in input_ports + output_ports:
        tb_code += ', {}'.format(port_name)
    tb_code += ');\n    end\n'
    
    tb_code += 'endmodule\n'
    
    return tb_code

def generate_initial_value(port_name):
    # generate signal values based on wire type 
    if 'tvalid' in port_name.lower():
        return '1'
    elif 'tdata' in port_name.lower():
        return '32\'h12345678'  
    elif 'tready' in port_name.lower():
        return '1'
    else:
        return '0'  # Default value

# Read the Verilog file - TODO: automatically figure out the top level design file? 
verilog_file_path = 'finn_design.v'
with open(verilog_file_path, 'r') as f:
    verilog_code = f.read()

# Specify the top-level module name - TODO: how to automatically have top level module figured out? 
top_module_name = 'finn_design'

# Extract module and port information for the specified top-level module
module_name, input_ports, output_ports = extract_ports(verilog_code, top_module_name)

# Generate the testbench code
testbench_code = generate_testbench(module_name, input_ports, output_ports)

testbench_file_path = '{}_tb.sv'.format(module_name)
with open(testbench_file_path, 'w') as f:
    f.write(testbench_code)

print("Generated testbench for {} in {}".format(module_name, testbench_file_path))

os.system("verilator --binary --cc --exe --trace -sv --timing --Wall --Wno-fatal -CFLAGS \"-std=c++20\" *.v *.sv -o finn_design_sim")

os.chdir("obj_dir")
os.system("./finn_design_sim")

if os.path.exists("dump.vcd"):
    os.system("gtkwave dump.vcd")
else:
    print("No VCD file generated.")