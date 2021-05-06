############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project my_prj_prj
set_top my_prj
add_files firmware/my_prj.cpp -cflags "-std=c++0x"
add_files firmware/BDT.h -cflags "-std=c++0x"
add_files -tb tb_data -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb my_prj_test.cpp -cflags "-Ifirmware/. -std=c++0x -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution2"
set_part {xcvu9p-flgb2104-2L-e}
create_clock -period 5 -name default
#source "./my_prj_prj/solution2/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -format ip_catalog
