### Generic model module IO interface
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
