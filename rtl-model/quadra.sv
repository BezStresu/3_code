// File: quadra.sv
// Quadratic polynomial: f(x) = a + b*x2 + c*(x2^2)

`include "quadra.svh"
`include "square.sv"
`include "lut.sv"

module quadra
(
    input  x_t x,
    output y_t y
);

    wire x1_t x1;
    wire x2_t x2; 

    assign x1 = x[X_W-1:X2_W]; 
    assign x2 = x[X2_W-1:0]; 

    wire sq_t sq;
    square u_square(
        .x2(x2),
        .sq(sq)
    );

    wire a_t a;
    wire b_t b;
    wire c_t c;

    lut u_lut(
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );

    t0_t t0;  // t0 = a
    t1_t t1;  // t1 = b * x2
    t2_t t2;  // t2 = c * x2^2
    s_t s;    // sum

    always_comb begin
        t0 = a;
        t1 = b * x2;
        t2 = c * sq;

        s = t0 + t1 + t2;

        y = s; 
    end

endmodule