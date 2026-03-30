// File: quarda.sv

`timescale 1ps/1ps

`include "quadra.svh"
// `include "square.sv"
// `include "lut.sv"

module quadra
(
    input  ck_t   clk,
    input  rs_t   rst_b,
    input  x_t    x,
    output y_t    y
);

    // Connections initialization
    wire x1_t x1_w = x[X_W-1:X2_W];
    wire x2_t x2_w = x[X2_W-1:0];

    wire sq_t sq_w;
    wire a_t  a_w;
    wire b_t  b_w;
    wire c_t  c_w;

    // Stage 1 lut + square
    square u_square(
        .x2(x2_w),
        .sq(sq_w)
    );

    lut u_lut(
        .x1(x1_w),
        .a(a_w),
        .b(b_w),
        .c(c_w)
    );

    x2_t x2_r1;
    sq_t sq_r1;
    a_t  a_r1;
    b_t  b_r1;
    c_t  c_r1;

    always_ff @(posedge clk) begin
        if(!rst_b) begin
            x2_r1 <= '0;
            sq_r1 <= '0;
            a_r1  <= '0;
            b_r1  <= '0;
            c_r1  <= '0;
        end
        else begin
            x2_r1 <= x2_w;
            sq_r1 <= sq_w;
            a_r1  <= a_w;
            b_r1  <= b_w;
            c_r1  <= c_w;
        end
    end

    // Stage 2 multiplications
    t1_t t1_w;
    t2_t t2_w;

    always_comb begin
        t1_w = (b_r1 * x2_r1) >> (X2_F - (T1_F - B_F));
        t2_w = (c_r1 * sq_r1) >> (SQ_F - (T2_F - C_F));
    end

    t0_t t0_r2;
    t1_t t1_r2;
    t2_t t2_r2;

    always_ff @(posedge clk) begin
        if(!rst_b) begin
            t0_r2 <= '0;
            t1_r2 <= '0;
            t2_r2 <= '0;
        end
        else begin
            //t0_r2 <= a_r1; // warning
            t0_r2 <= {{T0_W-A_W{a_r1[A_W-1]}}, a_r1}; 
            t1_r2 <= t1_w;
            t2_r2 <= t2_w;
        end
    end

    // Stage 3 sum
    s_t s_w;
    logic signed [T0_W + T1_W + T2_W - 1:0] s_full;

    always_comb begin
        //s_w = t0_r2 + t1_r2 + t2_r2; // Warning

        s_full = {{T1_W+T2_W{t0_r2[T0_W-1]}}, t0_r2} +
                {{T0_W+T2_W{t1_r2[T1_W-1]}}, t1_r2} +
                {{T0_W+T1_W{t2_r2[T2_W-1]}}, t2_r2};
        s_w = s_full[S_W-1:0];
    end

    y_t y_r;

    always_ff @(posedge clk) begin
        if(!rst_b) begin
            y_r <= '0;
        end
        else begin
            //y_r <= s_w; // Warning
            y_r <= s_w[S_W-1 -: Y_W];
        end
    end

    assign y = y_r;

endmodule
