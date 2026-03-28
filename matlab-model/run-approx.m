#! /bin/csh -f

setenv QT_QPA_PLATFORM offscreen
setenv LIBGL_ALWAYS_SOFTWARE 1

if (-f coeffs.txt) then
    rm coeffs.txt
endif

#octave approx.m |& tee coeffs.txt
octave-cli --quiet approx.m |& tee coeffs.txt

# optionally, use optimized coeffs:
#octave approx_opt.m |& tee coeffs.txt

#octave print_coeffs.m |& tee hex_coeffs.txt
octave-cli --quiet print_coeffs.m |& tee hex_coeffs.txt

#octave-cli --quiet print_coeffs_opt.m |& tee hex_coeffs_opt.txt

octave-cli --quiet print_coeffs_opt.m |& tee hex_coeffs_opt.txt




