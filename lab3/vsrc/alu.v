module alu(a, b, ctrl, res, car, of);
  input [3:0] a,b;
  input [2:0] ctrl;
  output reg [3:0] res;
  output reg car, of;
  reg [3:0] tmp;
  always_latch@(a or b or ctrl) begin
    case(ctrl)
      3'b000:
        begin
          {car, res}=a+b;
          of=(a[3]==b[3])&&(res[3]!=a[3]);
        end
      3'b001:
        begin
          tmp=((4'b1111)^b)+1;
          {car, res}=a+tmp;
          of=(a[3]==b[3])&&(res[3]!=a[3]);
        end
      3'b010:
        begin
          res=~a;
          car=0;
          of=0;
        end
      3'b011:
        begin
          res=a&b;
          car=0;
          of=0;
        end
      3'b100:
        begin
          res=a|b;
          car=0;
          of=0;
        end
      3'b101:
        begin
          res=a^b;
          car=0;
          of=0;
        end
      3'b110:
        begin
          car=0;
          of=0;
          if(a[3]==0&&b[3]==1)
            res=0;
          else if(a[3]==1&&b[3]==0)
            res=1;
          else
            res=(a<b)?1:0;
        end
      3'b111:
        begin
          car=0;
          of=0;
          res=(a==b)?1:0;
        end
    endcase
  end
endmodule
