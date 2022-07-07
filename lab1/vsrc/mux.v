module mux(a,s,y);
  input  [3:0] a;
  input  [1:0] s;
  output y;
  assign y = (a[0]&~s[0]&~s[1])|(a[1]&s[0]&~s[1])|(a[2]&s[1]&~s[0])|(a[3]&s[1]&s[0]);
endmodule
