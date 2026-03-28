`include "quadra.svh"

module square
(
    input  x2_t x2,
    output sq_t sq
);
    // Compute x2^2:
    logic [2*X2_W-1:0] sq_full;

    always_comb begin 
        sq_full = x2 * x2;
        sq = sq_full >> (2*X2_F - SQ_F);
    end

endmodule
