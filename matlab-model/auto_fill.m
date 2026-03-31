fid_in  = fopen("hex_coeffs_opt.txt", "r");
fid_out = fopen("../rtl-model/lut.sv", "w");

if fid_in < 0
    error("Could not open input file");
endif

if fid_out < 0
    error("Could not open output file");
endif

lines = {};
i = 1;
while ~feof(fid_in)
    line = strtrim(fgetl(fid_in));
    if ischar(line) && length(line) > 0
        lines{i} = line;
        i++;
    endif
endwhile

K = length(lines);

fprintf(fid_out, "`include \"quadra.svh\"\n\n");
fprintf(fid_out, "module lut\n(\n");
fprintf(fid_out, "    input  x1_t  x1,\n");
fprintf(fid_out, "    output a_t   a,\n");
fprintf(fid_out, "    output b_t   b,\n");
fprintf(fid_out, "    output c_t   c\n");
fprintf(fid_out, ");\n\n");

fprintf(fid_out, "    // Coefficients a (s3.22)\n");
fprintf(fid_out, "    always_comb\n");
fprintf(fid_out, "    unique casez (x1)\n");

for i = 1:K
    parts = strsplit(lines{i});

    idx = str2num(parts{1});
    a_hex = parts{2}(3:end);

    bin = dec2bin(idx, 7);

    fprintf(fid_out, "        7'b%s : a = 25'h%s;\n", bin, a_hex);
endfor

fprintf(fid_out, "        default : a = '0;\n");
fprintf(fid_out, "        //For debug\n");
fprintf(fid_out, "        //default : a = 'x;\n");
fprintf(fid_out, "    endcase\n\n");

fprintf(fid_out, "    // Coefficients b (s3.16)\n");
fprintf(fid_out, "    always_comb\n");
fprintf(fid_out, "    unique casez (x1)\n");

for i = 1:K
    parts = strsplit(lines{i});

    idx = str2num(parts{1});
    b_hex = parts{3}(3:end);

    bin = dec2bin(idx, 7);

    fprintf(fid_out, "        7'b%s : b = 19'h%s;\n", bin, b_hex);
endfor

fprintf(fid_out, "        default : b = '0;\n");
fprintf(fid_out, "        //For debug\n");
fprintf(fid_out, "        //default : b = 'x;\n");
fprintf(fid_out, "    endcase\n\n");


fprintf(fid_out, "    // Coefficients c (s2.11)\n");
fprintf(fid_out, "    always_comb\n");
fprintf(fid_out, "    unique casez (x1)\n");

for i = 1:K
    parts = strsplit(lines{i});

    idx = str2num(parts{1});
    c_hex = parts{4}(3:end);

    bin = dec2bin(idx, 7);

    fprintf(fid_out, "        7'b%s : c = 13'h%s;\n", bin, c_hex);
endfor

fprintf(fid_out, "        default : c = '0;\n");
fprintf(fid_out, "        //For debug\n");
fprintf(fid_out, "        //default : c = 'x;\n");
fprintf(fid_out, "    endcase\n\n");

fprintf(fid_out, "endmodule\n");

fclose(fid_in);
fclose(fid_out);
