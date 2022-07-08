module mux(a, en, f, b, state, dig);
  input [7:0] a;
  input en;
  output reg f;
  output reg [2:0] b;
  output reg state;
  output reg [6:0] dig;
  assign f=a[0]|a[1]|a[2]|a[3]|a[4]|a[5]|a[6]|a[7];
  always@(a or en) begin
    if(en) begin
      b=0;
      casez(a)
        8'b1???????: b=3'b111;
        8'b01??????: b=3'b110;
        8'b001?????: b=3'b101;
        8'b0001????: b=3'b100;
        8'b00001???: b=3'b011;
        8'b000001??: b=3'b010;
        8'b0000001?: b=3'b001;
        8'b00000001: b=3'b000;
        default: b=3'b000;
      endcase
      if(f==1) begin
        state=1;
        case(b)
					3'b000: dig=7'b1000000;
					3'b001: dig=7'b1111001;
					3'b010: dig=7'b0100100;
					3'b011: dig=7'b0110000;
					3'b100: dig=7'b0011001;
					3'b101: dig=7'b0010010;
					3'b110: dig=7'b0000010;
					3'b111: dig=7'b1111000;
        endcase
      end
      else begin
        state=0;
        dig=7'b1111111;
      end
    end
    else begin
      b=0;
      state=0;
      dig=7'b1111111;
    end
  end
endmodule
