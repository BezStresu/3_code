//
// QuadraTb.cpp -- test bench for the Quadratic Approximation Unit (QAU) Model
//

#include <cstdint>
#include <algorithm>    // std::max
#include <vector>
#include <iostream>
#include <iomanip>
#include <bitset>

#include "Quadra.hpp"
#include "CoeffTable.hpp"


double y_err_max;

double quantize(double val, int int_bits, int frac_bits) {
    double scale = 1 << frac_bits;
    double max_val = (1 << (int_bits - 1)) - 1.0 / scale;
    double min_val = -(1 << (int_bits - 1));
    double q = round(val * scale) / scale;
    if (q > max_val) q = max_val;
    if (q < min_val) q = min_val;
    return q;
}

void quantize_test(double val, int int_bits, int frac_bits){
    using namespace std;

    const int PREC  = 28;
    const int WIDTH = PREC + 3;

    double orginal = quantize(val, 4, 28);
    double quantized = quantize(val, int_bits, frac_bits);
    double q_err = abs(orginal - quantized);

    cout << "Orginal s4.28: "
    << dec << fixed << setw(WIDTH) << setprecision(PREC) << setfill(' ') << right
    << orginal << endl;

    cout << "Changed " << "s" << int_bits << "." << frac_bits << ": " 
    << dec << fixed << setw(31) << setprecision(28) << setfill(' ') << right
    << quantized << endl;

    cout << "Q error:       "
    << dec << fixed << setw(WIDTH) << setprecision(PREC) << setfill(' ') << right
    << q_err << endl;

}

void coeff_opti_chds(void){

    using namespace std;

    int max_int_bits = 4;
    int max_frac_bits = 28;

    int a_best_int_bits = max_int_bits;
    int a_best_frac_bits = max_frac_bits;
    int b_best_int_bits = max_int_bits;
    int b_best_frac_bits = max_frac_bits;
    int c_best_int_bits = max_int_bits;
    int c_best_frac_bits = max_frac_bits;

    auto compute_error = [&](int ai, int af,
                             int bi, int bf,
                             int ci, int cf) {

        double max_err = 0.0;

        // Test params:
        uint32_t m_start = 0x000000;
        uint32_t m_stop  = 0xffffff;
        uint32_t m_step  = 0x000101;

        for (uint32_t m = m_start; m <= m_stop; m += m_step)
        {
            double x_dbl = double(m) / double(0x00800000);

            x_fxd_t x_fxd = x_dbl;

            x_int_t  x_int = x_fxd.slc<X_W>(0);
            x1_int_t x1_int = x_int.slc<X1_W>(X2_W);
            x2_int_t x2_int = x_int.slc<X2_W>(0);

            x2_fxd_t x2_fxd = 0; 
            x2_fxd.set_slc(0, x2_int);

            double x2 = x2_fxd.to_double();

            int index = x1_int;

            double a_org = CoeffTable[index][1];
            double b_org = CoeffTable[index][2];
            double c_org = CoeffTable[index][3];

            double a_q = quantize(a_org, ai, af);
            double b_q = quantize(b_org, bi, bf);
            double c_q = quantize(c_org, ci, cf);

            double y_approx = a_q + (b_q * x2) + (c_q * x2 * x2);

            double y_ref = sin((2.0 * x_dbl) - PI_OVER_4);

            double err = fabs(y_approx - y_ref);

            if (err > max_err){
                max_err = err;
            }

        }

        return max_err;
    };

    bool improved = true;

    while (improved) {
        improved = false;

        int ta, tb, tc, taf, tbf, tcf;

        // Iteracja 1:

        ta = (a_best_int_bits>1)?a_best_int_bits-1:a_best_int_bits;
        tb = (b_best_int_bits>1)?b_best_int_bits-1:b_best_int_bits;
        tc = (c_best_int_bits>1)?c_best_int_bits-1:c_best_int_bits;
        taf = (a_best_frac_bits>1)?a_best_frac_bits-1:a_best_frac_bits;
        tbf = (b_best_frac_bits>1)?b_best_frac_bits-1:b_best_frac_bits;
        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(ta,taf,tb,tbf,tc,tcf) < ERR_TOL) {
            a_best_int_bits = ta;
            b_best_int_bits = tb;
            c_best_int_bits = tc;
            a_best_frac_bits = taf;
            b_best_frac_bits = tbf;
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }

        // Iteracja 2

        tb = (b_best_int_bits>1)?b_best_int_bits-1:b_best_int_bits;
        tc = (c_best_int_bits>1)?c_best_int_bits-1:c_best_int_bits;
        taf = (a_best_frac_bits>1)?a_best_frac_bits-1:a_best_frac_bits;
        tbf = (b_best_frac_bits>1)?b_best_frac_bits-1:b_best_frac_bits;
        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(a_best_int_bits,taf,tb,tbf,tc,tcf) < ERR_TOL) {
            b_best_int_bits = tb;
            c_best_int_bits = tc;
            a_best_frac_bits = taf;
            b_best_frac_bits = tbf;
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }

        // Iteracja 3

        tc = (c_best_int_bits>1)?c_best_int_bits-1:c_best_int_bits;
        taf = (a_best_frac_bits>1)?a_best_frac_bits-1:a_best_frac_bits;
        tbf = (b_best_frac_bits>1)?b_best_frac_bits-1:b_best_frac_bits;
        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(a_best_int_bits,taf,
                          b_best_int_bits,tbf,
                          tc,tcf) < ERR_TOL) {
            c_best_int_bits = tc;
            a_best_frac_bits = taf;
            b_best_frac_bits = tbf;
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }

        // Iteracja 4

        taf = (a_best_frac_bits>1)?a_best_frac_bits-1:a_best_frac_bits;
        tbf = (b_best_frac_bits>1)?b_best_frac_bits-1:b_best_frac_bits;
        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(a_best_int_bits,taf,
                          b_best_int_bits,tbf,
                          c_best_int_bits,tcf) < ERR_TOL) {
            a_best_frac_bits = taf;
            b_best_frac_bits = tbf;
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }

        // Iteracja 5

        tbf = (b_best_frac_bits>1)?b_best_frac_bits-1:b_best_frac_bits;
        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(a_best_int_bits,a_best_frac_bits,
                          b_best_int_bits,tbf,
                          c_best_int_bits,tcf) < ERR_TOL) {
            b_best_frac_bits = tbf;
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }

        // Iteracja 6

        tcf = (c_best_frac_bits>1)?c_best_frac_bits-1:c_best_frac_bits;

        if (compute_error(a_best_int_bits,a_best_frac_bits,
                          b_best_int_bits,b_best_frac_bits,
                          c_best_int_bits,tcf) < ERR_TOL) {
            c_best_frac_bits = tcf;
            improved = true;
            continue;
        }
    }

    cout << "Optimized bit count:\n";
    cout << "A: int=" << a_best_int_bits << " frac=" << a_best_frac_bits << endl;
    cout << "B: int=" << b_best_int_bits << " frac=" << b_best_frac_bits << endl;
    cout << "C: int=" << c_best_int_bits << " frac=" << c_best_frac_bits << endl;
}

bool testFunction (const double & x_dbl)
{
    using namespace std;

    const int PREC  = 28;
    const int WIDTH = PREC + 3;

    // Input:
    x_fxd_t x_fxd = x_dbl;

    if constexpr (DBG_TST) {
        cout << "x_dbl  = " << dec << fixed      << setw(WIDTH) << setprecision(PREC) << setfill(' ') << right
             <<  x_dbl     << endl;
    }

    // Approximation:
#ifdef DOUBLE_OVERRIDE
    y_fxd_t y_fxd = approxDouble (x_fxd); // use this to override fixed point with doubles
#else
    y_fxd_t y_fxd = approxFixed  (x_fxd); // fixed-point data path
#endif

    // Ouput:
    double y_dbl = y_fxd.to_double();

    // Reference (CPU):
    double y_ref = sin((2.0 * x_dbl) - PI_OVER_4);

    // Error:
    double y_err = abs(y_dbl - y_ref);

    // Max error looking:
    if(y_err > y_err_max){
        y_err_max = y_err;
    }

    if constexpr (DBG_TST) {
        cout << "y_dbl  = " << dec << fixed      << setw(WIDTH) << setprecision(PREC) << setfill(' ') << right
             <<  y_dbl     << endl;
        cout << "y_ref  = " << dec << fixed      << setw(WIDTH) << setprecision(PREC) << setfill(' ') << right
             <<  y_ref << endl;
        cout << "y_err  = " << dec << scientific << setw(9)     << setprecision(2)    << setfill(' ') << right
             <<  y_err << endl << endl;
    }

    // Pass/fail:
    bool in_spec = (y_err < ERR_TOL);

    return in_spec;
}

bool testFunction (void)
{
    using namespace std;

    // Test params:
    uint32_t m_start = 0x000000; // 0.0
    uint32_t m_stop  = 0xffffff; // 1.999...
    uint32_t m_step  = 0x000101; // sparse test
//    uint32_t m_step  = 0x000001; // exhaustive test

    // Initialize test status:
    bool ok_sts = true;

    // Main simulation loop:
    for (uint32_t m = m_start; m <= m_stop; m += m_step)
    {
        double x_dbl = double(m) / double(0x00800000);
        //             ---------------------
        bool in_spec = testFunction (x_dbl);
        //             ---------------------

        ok_sts &= in_spec;
    }

//    Max error display:
    // cout << "y_err_max  = " << dec << scientific << setw(9)     << setprecision(2)    << setfill(' ') << right
    // <<  y_err_max << endl << endl;

    return ok_sts;

}

int main (int argc, char *argv[])
{
    using namespace std;
    bool ok_sts = true;

    ok_sts &= testFunction();

    int ret_sts = (ok_sts) ? 0 : -1;

    // quantize_test(1.9769592285156250000000000000, 3, 10);
    //coeff_opti_chds();

    return ret_sts;
}
