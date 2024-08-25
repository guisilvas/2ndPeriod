/*
Guia_0301.v
863485 - Guilherme Soares Silva
*/

module Guia_0301;

reg [5:0] a = 6'b001010;  // binnary
reg [7:0] b = 8'b00001101;  // binnary
reg [5:0] c = 6'b101001;  // binnary
  reg [6:0] d = 7'b0101111;  // binarry
  reg [7:0] e = 8'b00110100;  // binarry

reg [5:0] c1_a, c2_a;
reg [7:0] c1_b, c2_b;
reg [5:0] c1_c, c2_c;
reg [6:0] c1_d, c2_d;
reg [7:0] c1_e, c2_e;

initial
begin : main
    $display("Guia_0301 - Complementos");

    c1_a = ~a; 
    c2_a = ~a + 1; 
    $display("a = %6b -> C1(a) = %6b -> C2(a) = %6b", a, c1_a, c2_a);

    c1_b = ~b; 
    c2_b = ~b + 1; 
    $display("b = %8b -> C1(b) = %8b -> C2(b) = %8b", b, c1_b, c2_b);

    c1_c = ~c; 
    c2_c = ~c + 1; 
    $display("c = %6b -> C1(c) = %6b -> C2(c) = %6b", c, c1_c, c2_c);

    c1_d = ~d; 
    c2_d = ~d + 1; 
    $display("d = %7b -> C1(d) = %7b -> C2(d) = %7b", d, c1_d, c2_d);

    c1_e = ~e; 
    c2_e = ~e + 1; 
    $display("e = %8b -> C1(e) = %8b -> C2(e) = %8b", e, c1_e, c2_e);
end // main

endmodule // Guia_0301
