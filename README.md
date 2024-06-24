### Setting up python virtual environment
```
python3 -m venv venv
source venv/bin/activate

```

### Generic model module IO interface
The Verilator simulation testbench only supports sample data types with a maximum of 32 bits. Additional logic needs to be implemented in order to support larger data types, which are uncommon in Machine Learning. <br>
Sample inputs should be stored as text files under `simulation/hex`, where each line corresponds to one entry of a sample in hexadecimal format. The filename can then be passed to `simulation/sim.py` to run the simulation given the provided sample inputs.
```
module model #(
    parameter IN_W = 32,
    parameter OUT_W = 32
) (
    input wire clk,
    input wire reset,
    input wire sample[IN_W-1:0],
    output reg prediction[OUT_W-1:0]
);
    
endmodule
```
