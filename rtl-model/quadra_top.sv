// File: quarda_top.sv

`timescale 1ps/1ps

`include "quadra.svh"

module quadra_top
(
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);

    // Pipeline data valid (3 stages)
    dv_t dv_p0, dv_p1, dv_p2;

    always_ff @(posedge clk) begin
        if(!rst_b) begin
            dv_p0 <= '0;
            dv_p1 <= '0;
            dv_p2 <= '0;
        end
        else begin
            dv_p0 <= x_dv;
            dv_p1 <= dv_p0;
            dv_p2 <= dv_p1;
        end
    end

    y_t y_int;

    quadra u_quadra(
        .clk(clk),
        .rst_b(rst_b),
        .x(x),
        .y(y_int)
    );

    assign y = y_int;
    assign y_dv = dv_p2;

endmodule