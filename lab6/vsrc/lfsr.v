module lfsr(clk, ra);
  input clk;
  output reg [7:0] ra;

  always@(posedge clk)
    if(ra == 0)
      ra <= 1;
    else begin
      ra[7] <= ra[4]^ra[3]^ra[2]^ra[0];
      ra[6] <= ra[7];
      ra[5] <= ra[6];
      ra[4] <= ra[5];
      ra[3] <= ra[4];
      ra[2] <= ra[3];
      ra[1] <= ra[2];
      ra[0] <= ra[1];
    end
endmodule