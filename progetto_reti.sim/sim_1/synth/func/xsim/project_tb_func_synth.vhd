-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Mon Mar  9 18:20:43 2020
-- Host        : LAPTOP-DO4A1RG6 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -mode funcsim -nolib -force -file
--               D:/Progetto/ProgettoRetiLogiche/progetto_reti.sim/sim_1/synth/func/xsim/project_tb_func_synth.vhd
-- Design      : project_reti_logiche
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a200tfbg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity project_reti_logiche is
  port (
    i_clk : in STD_LOGIC;
    i_start : in STD_LOGIC;
    i_rst : in STD_LOGIC;
    i_data : in STD_LOGIC_VECTOR ( 7 downto 0 );
    o_address : out STD_LOGIC_VECTOR ( 15 downto 0 );
    o_done : out STD_LOGIC;
    o_en : out STD_LOGIC;
    o_we : out STD_LOGIC;
    o_data : out STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of project_reti_logiche : entity is true;
end project_reti_logiche;

architecture STRUCTURE of project_reti_logiche is
  signal \FSM_sequential_next_state_reg[2]_i_2_n_0\ : STD_LOGIC;
  signal current_state : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal data1 : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal data2 : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal data3 : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal data4 : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal data5 : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal i_clk_IBUF : STD_LOGIC;
  signal i_clk_IBUF_BUFG : STD_LOGIC;
  signal i_data_IBUF : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal i_rst_IBUF : STD_LOGIC;
  signal i_rst_IBUF_BUFG : STD_LOGIC;
  signal i_start_IBUF : STD_LOGIC;
  signal next_state : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \next_state__0\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal o_address_OBUF : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \o_address_reg[0]_i_1_n_0\ : STD_LOGIC;
  signal \o_address_reg[3]_i_1_n_0\ : STD_LOGIC;
  signal \o_address_reg[3]_i_2_n_0\ : STD_LOGIC;
  signal o_data_OBUF : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \o_data_reg[0]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[1]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[2]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_10_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_11_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_12_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_13_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_14_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_15_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_16_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_17_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_18_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_2_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_3_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_4_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_5_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_6_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_7_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_7_n_1\ : STD_LOGIC;
  signal \o_data_reg[3]_i_7_n_2\ : STD_LOGIC;
  signal \o_data_reg[3]_i_7_n_3\ : STD_LOGIC;
  signal \o_data_reg[3]_i_8_n_0\ : STD_LOGIC;
  signal \o_data_reg[3]_i_8_n_1\ : STD_LOGIC;
  signal \o_data_reg[3]_i_8_n_2\ : STD_LOGIC;
  signal \o_data_reg[3]_i_8_n_3\ : STD_LOGIC;
  signal \o_data_reg[3]_i_9_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_10_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_10_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_10_n_3\ : STD_LOGIC;
  signal \o_data_reg[4]_i_11_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_11_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_11_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_11_n_3\ : STD_LOGIC;
  signal \o_data_reg[4]_i_12_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_13_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_14_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_15_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_16_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_17_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_18_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_19_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_20_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_21_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_22_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_23_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_24_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_25_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_26_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_27_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_28_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_29_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_2_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_30_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_31_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_32_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_33_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_34_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_35_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_3_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_4_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_5_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_6_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_6_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_6_n_3\ : STD_LOGIC;
  signal \o_data_reg[4]_i_7_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_7_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_7_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_7_n_3\ : STD_LOGIC;
  signal \o_data_reg[4]_i_8_n_0\ : STD_LOGIC;
  signal \o_data_reg[4]_i_8_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_8_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_8_n_3\ : STD_LOGIC;
  signal \o_data_reg[4]_i_9_n_1\ : STD_LOGIC;
  signal \o_data_reg[4]_i_9_n_2\ : STD_LOGIC;
  signal \o_data_reg[4]_i_9_n_3\ : STD_LOGIC;
  signal \o_data_reg[5]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[5]_i_2_n_0\ : STD_LOGIC;
  signal \o_data_reg[5]_i_3_n_0\ : STD_LOGIC;
  signal \o_data_reg[5]_i_4_n_0\ : STD_LOGIC;
  signal \o_data_reg[6]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_10_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_10_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_10_n_3\ : STD_LOGIC;
  signal \o_data_reg[7]_i_11_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_12_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_13_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_14_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_15_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_16_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_17_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_18_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_19_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_1_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_20_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_21_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_22_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_23_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_24_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_25_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_26_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_27_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_28_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_29_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_29_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_29_n_3\ : STD_LOGIC;
  signal \o_data_reg[7]_i_2_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_30_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_30_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_30_n_3\ : STD_LOGIC;
  signal \o_data_reg[7]_i_31_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_32_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_33_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_34_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_35_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_36_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_37_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_38_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_3_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_4_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_5_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_6_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_3\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_4\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_5\ : STD_LOGIC;
  signal \o_data_reg[7]_i_7_n_6\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_3\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_4\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_5\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_6\ : STD_LOGIC;
  signal \o_data_reg[7]_i_8_n_7\ : STD_LOGIC;
  signal \o_data_reg[7]_i_9_n_0\ : STD_LOGIC;
  signal \o_data_reg[7]_i_9_n_1\ : STD_LOGIC;
  signal \o_data_reg[7]_i_9_n_2\ : STD_LOGIC;
  signal \o_data_reg[7]_i_9_n_3\ : STD_LOGIC;
  signal o_done_OBUF : STD_LOGIC;
  signal o_done_reg_i_1_n_0 : STD_LOGIC;
  signal o_done_reg_i_2_n_0 : STD_LOGIC;
  signal o_en_OBUF : STD_LOGIC;
  signal o_en_reg_i_1_n_0 : STD_LOGIC;
  signal o_en_reg_i_2_n_0 : STD_LOGIC;
  signal o_we_OBUF : STD_LOGIC;
  signal o_we_reg_i_1_n_0 : STD_LOGIC;
  signal wz_result : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal wz_result2 : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal wz_result21_in : STD_LOGIC_VECTOR ( 7 downto 1 );
  signal \wz_result__0\ : STD_LOGIC;
  signal \wz_result_reg[0]_i_1_n_0\ : STD_LOGIC;
  signal \wz_result_reg[1]_i_1_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_10_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_11_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_12_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_13_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_14_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_1_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_3_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_4_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_5_n_1\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_5_n_2\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_5_n_3\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_6_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_6_n_1\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_6_n_2\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_6_n_3\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_7_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_8_n_0\ : STD_LOGIC;
  signal \wz_result_reg[2]_i_9_n_0\ : STD_LOGIC;
  signal \NLW_o_data_reg[3]_i_7_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[3]_i_8_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[4]_i_10_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[4]_i_11_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[4]_i_6_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[4]_i_7_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[4]_i_8_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[4]_i_9_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[7]_i_10_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[7]_i_29_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[7]_i_30_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_o_data_reg[7]_i_7_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_o_data_reg[7]_i_8_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_wz_result_reg[2]_i_5_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_wz_result_reg[2]_i_6_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_sequential_current_state_reg[0]\ : label is "write_addr:010,set_done:011,store_wb6_load_wb7:1101,wait_for_start:101,store_wb5_load_wb6:1100,store_wb4_load_wb5:1011,store_wb3_load_wb4:1010,process_addr:001,read_addr:000,store_wb2_load_wb3:1001,store_wb0_load_wb1:0111,wait_for_done:100,store_wb1_load_wb2:1000,wait_wb:1111,store_wb7:1110,read_wb0:0101";
  attribute FSM_ENCODED_STATES of \FSM_sequential_current_state_reg[1]\ : label is "write_addr:010,set_done:011,store_wb6_load_wb7:1101,wait_for_start:101,store_wb5_load_wb6:1100,store_wb4_load_wb5:1011,store_wb3_load_wb4:1010,process_addr:001,read_addr:000,store_wb2_load_wb3:1001,store_wb0_load_wb1:0111,wait_for_done:100,store_wb1_load_wb2:1000,wait_wb:1111,store_wb7:1110,read_wb0:0101";
  attribute FSM_ENCODED_STATES of \FSM_sequential_current_state_reg[2]\ : label is "write_addr:010,set_done:011,store_wb6_load_wb7:1101,wait_for_start:101,store_wb5_load_wb6:1100,store_wb4_load_wb5:1011,store_wb3_load_wb4:1010,process_addr:001,read_addr:000,store_wb2_load_wb3:1001,store_wb0_load_wb1:0111,wait_for_done:100,store_wb1_load_wb2:1000,wait_wb:1111,store_wb7:1110,read_wb0:0101";
  attribute XILINX_LEGACY_PRIM : string;
  attribute XILINX_LEGACY_PRIM of \FSM_sequential_next_state_reg[0]\ : label is "LD";
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \FSM_sequential_next_state_reg[0]_i_1\ : label is "soft_lutpair7";
  attribute XILINX_LEGACY_PRIM of \FSM_sequential_next_state_reg[1]\ : label is "LD";
  attribute SOFT_HLUTNM of \FSM_sequential_next_state_reg[1]_i_1\ : label is "soft_lutpair3";
  attribute XILINX_LEGACY_PRIM of \FSM_sequential_next_state_reg[2]\ : label is "LD";
  attribute SOFT_HLUTNM of \FSM_sequential_next_state_reg[2]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \FSM_sequential_next_state_reg[2]_i_2\ : label is "soft_lutpair4";
  attribute XILINX_LEGACY_PRIM of \o_address_reg[0]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_address_reg[0]_i_1\ : label is "soft_lutpair9";
  attribute OPT_MODIFIED : string;
  attribute OPT_MODIFIED of \o_address_reg[3]\ : label is "MLO";
  attribute XILINX_LEGACY_PRIM of \o_address_reg[3]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_address_reg[3]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \o_address_reg[3]_i_2\ : label is "soft_lutpair10";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[0]\ : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[1]\ : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[2]\ : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[3]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_data_reg[3]_i_5\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \o_data_reg[3]_i_6\ : label is "soft_lutpair0";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[4]\ : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[5]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_data_reg[5]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \o_data_reg[5]_i_3\ : label is "soft_lutpair1";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[6]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_data_reg[6]_i_1\ : label is "soft_lutpair6";
  attribute XILINX_LEGACY_PRIM of \o_data_reg[7]\ : label is "LD";
  attribute SOFT_HLUTNM of \o_data_reg[7]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \o_data_reg[7]_i_2\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \o_data_reg[7]_i_6\ : label is "soft_lutpair0";
  attribute XILINX_LEGACY_PRIM of o_done_reg : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_done_reg__0\ : label is "LD";
  attribute SOFT_HLUTNM of o_done_reg_i_1 : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of o_done_reg_i_2 : label is "soft_lutpair4";
  attribute XILINX_LEGACY_PRIM of o_en_reg : label is "LD";
  attribute XILINX_LEGACY_PRIM of \o_en_reg__0\ : label is "LD";
  attribute SOFT_HLUTNM of o_en_reg_i_1 : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of o_en_reg_i_2 : label is "soft_lutpair7";
  attribute OPT_MODIFIED of o_we_reg : label is "MLO";
  attribute XILINX_LEGACY_PRIM of o_we_reg : label is "LD";
  attribute SOFT_HLUTNM of o_we_reg_i_1 : label is "soft_lutpair8";
  attribute XILINX_LEGACY_PRIM of \wz_result_reg[0]\ : label is "LD";
  attribute SOFT_HLUTNM of \wz_result_reg[0]_i_1\ : label is "soft_lutpair1";
  attribute XILINX_LEGACY_PRIM of \wz_result_reg[1]\ : label is "LD";
  attribute XILINX_LEGACY_PRIM of \wz_result_reg[2]\ : label is "LD";
  attribute SOFT_HLUTNM of \wz_result_reg[2]_i_2\ : label is "soft_lutpair3";
begin
\FSM_sequential_current_state_reg[0]\: unisim.vcomponents.FDCE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      CLR => i_rst_IBUF_BUFG,
      D => next_state(0),
      Q => current_state(0)
    );
\FSM_sequential_current_state_reg[1]\: unisim.vcomponents.FDCE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      CLR => i_rst_IBUF_BUFG,
      D => next_state(1),
      Q => current_state(1)
    );
\FSM_sequential_current_state_reg[2]\: unisim.vcomponents.FDCE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      CLR => i_rst_IBUF_BUFG,
      D => next_state(2),
      Q => current_state(2)
    );
\FSM_sequential_next_state_reg[0]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \next_state__0\(0),
      G => \FSM_sequential_next_state_reg[2]_i_2_n_0\,
      GE => '1',
      Q => next_state(0)
    );
\FSM_sequential_next_state_reg[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"15"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(1),
      I2 => current_state(2),
      O => \next_state__0\(0)
    );
\FSM_sequential_next_state_reg[1]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \next_state__0\(1),
      G => \FSM_sequential_next_state_reg[2]_i_2_n_0\,
      GE => '1',
      Q => next_state(1)
    );
\FSM_sequential_next_state_reg[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"12"
    )
        port map (
      I0 => current_state(1),
      I1 => current_state(2),
      I2 => current_state(0),
      O => \next_state__0\(1)
    );
\FSM_sequential_next_state_reg[2]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \next_state__0\(2),
      G => \FSM_sequential_next_state_reg[2]_i_2_n_0\,
      GE => '1',
      Q => next_state(2)
    );
\FSM_sequential_next_state_reg[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"24"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      O => \next_state__0\(2)
    );
\FSM_sequential_next_state_reg[2]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"09FF"
    )
        port map (
      I0 => current_state(0),
      I1 => i_start_IBUF,
      I2 => current_state(1),
      I3 => current_state(2),
      O => \FSM_sequential_next_state_reg[2]_i_2_n_0\
    );
i_clk_IBUF_BUFG_inst: unisim.vcomponents.BUFG
     port map (
      I => i_clk_IBUF,
      O => i_clk_IBUF_BUFG
    );
i_clk_IBUF_inst: unisim.vcomponents.IBUF
     port map (
      I => i_clk,
      O => i_clk_IBUF
    );
\i_data_IBUF[0]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(0),
      O => i_data_IBUF(0)
    );
\i_data_IBUF[1]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(1),
      O => i_data_IBUF(1)
    );
\i_data_IBUF[2]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(2),
      O => i_data_IBUF(2)
    );
\i_data_IBUF[3]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(3),
      O => i_data_IBUF(3)
    );
\i_data_IBUF[4]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(4),
      O => i_data_IBUF(4)
    );
\i_data_IBUF[5]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(5),
      O => i_data_IBUF(5)
    );
\i_data_IBUF[6]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(6),
      O => i_data_IBUF(6)
    );
\i_data_IBUF[7]_inst\: unisim.vcomponents.IBUF
     port map (
      I => i_data(7),
      O => i_data_IBUF(7)
    );
i_rst_IBUF_BUFG_inst: unisim.vcomponents.BUFG
     port map (
      I => i_rst_IBUF,
      O => i_rst_IBUF_BUFG
    );
i_rst_IBUF_inst: unisim.vcomponents.IBUF
     port map (
      I => i_rst,
      O => i_rst_IBUF
    );
i_start_IBUF_inst: unisim.vcomponents.IBUF
     port map (
      I => i_start,
      O => i_start_IBUF
    );
\o_address_OBUF[0]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(0),
      O => o_address(0)
    );
\o_address_OBUF[10]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(10)
    );
\o_address_OBUF[11]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(11)
    );
\o_address_OBUF[12]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(12)
    );
\o_address_OBUF[13]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(13)
    );
\o_address_OBUF[14]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(14)
    );
\o_address_OBUF[15]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(15)
    );
\o_address_OBUF[1]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(1)
    );
\o_address_OBUF[2]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(2)
    );
\o_address_OBUF[3]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(3),
      O => o_address(3)
    );
\o_address_OBUF[4]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(4)
    );
\o_address_OBUF[5]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(5)
    );
\o_address_OBUF[6]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(6)
    );
\o_address_OBUF[7]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(7)
    );
\o_address_OBUF[8]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(8)
    );
\o_address_OBUF[9]_inst\: unisim.vcomponents.OBUF
     port map (
      I => '0',
      O => o_address(9)
    );
\o_address_reg[0]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_address_reg[0]_i_1_n_0\,
      G => \o_address_reg[3]_i_2_n_0\,
      GE => '1',
      Q => o_address_OBUF(0)
    );
\o_address_reg[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => current_state(1),
      I1 => current_state(2),
      O => \o_address_reg[0]_i_1_n_0\
    );
\o_address_reg[3]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_address_reg[3]_i_1_n_0\,
      G => \o_address_reg[3]_i_2_n_0\,
      GE => '1',
      Q => o_address_OBUF(3)
    );
\o_address_reg[3]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => current_state(2),
      O => \o_address_reg[3]_i_1_n_0\
    );
\o_address_reg[3]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => current_state(2),
      I1 => current_state(0),
      O => \o_address_reg[3]_i_2_n_0\
    );
\o_data_OBUF[0]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(0),
      O => o_data(0)
    );
\o_data_OBUF[1]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(1),
      O => o_data(1)
    );
\o_data_OBUF[2]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(2),
      O => o_data(2)
    );
\o_data_OBUF[3]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(3),
      O => o_data(3)
    );
\o_data_OBUF[4]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(4),
      O => o_data(4)
    );
\o_data_OBUF[5]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(5),
      O => o_data(5)
    );
\o_data_OBUF[6]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(6),
      O => o_data(6)
    );
\o_data_OBUF[7]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_data_OBUF(7),
      O => o_data(7)
    );
\o_data_reg[0]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[0]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(0)
    );
\o_data_reg[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EE2E222222222222"
    )
        port map (
      I0 => i_data_IBUF(0),
      I1 => \o_data_reg[7]_i_1_n_0\,
      I2 => \o_data_reg[3]_i_3_n_0\,
      I3 => \o_data_reg[3]_i_4_n_0\,
      I4 => \o_data_reg[3]_i_5_n_0\,
      I5 => \o_data_reg[3]_i_2_n_0\,
      O => \o_data_reg[0]_i_1_n_0\
    );
\o_data_reg[1]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[1]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(1)
    );
\o_data_reg[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22222222EE2E2222"
    )
        port map (
      I0 => i_data_IBUF(1),
      I1 => \o_data_reg[7]_i_1_n_0\,
      I2 => \o_data_reg[3]_i_3_n_0\,
      I3 => \o_data_reg[3]_i_4_n_0\,
      I4 => \o_data_reg[3]_i_5_n_0\,
      I5 => \o_data_reg[3]_i_2_n_0\,
      O => \o_data_reg[1]_i_1_n_0\
    );
\o_data_reg[2]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[2]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(2)
    );
\o_data_reg[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0A0ACA0ACACACACA"
    )
        port map (
      I0 => i_data_IBUF(2),
      I1 => \o_data_reg[3]_i_2_n_0\,
      I2 => \o_data_reg[7]_i_1_n_0\,
      I3 => \o_data_reg[3]_i_3_n_0\,
      I4 => \o_data_reg[3]_i_4_n_0\,
      I5 => \o_data_reg[3]_i_5_n_0\,
      O => \o_data_reg[2]_i_1_n_0\
    );
\o_data_reg[3]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[3]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(3)
    );
\o_data_reg[3]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0A0A3A0A3A3A3A3A"
    )
        port map (
      I0 => i_data_IBUF(3),
      I1 => \o_data_reg[3]_i_2_n_0\,
      I2 => \o_data_reg[7]_i_1_n_0\,
      I3 => \o_data_reg[3]_i_3_n_0\,
      I4 => \o_data_reg[3]_i_4_n_0\,
      I5 => \o_data_reg[3]_i_5_n_0\,
      O => \o_data_reg[3]_i_1_n_0\
    );
\o_data_reg[3]_i_10\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"47"
    )
        port map (
      I0 => wz_result21_in(1),
      I1 => \o_data_reg[4]_i_3_n_0\,
      I2 => wz_result2(1),
      O => \o_data_reg[3]_i_10_n_0\
    );
\o_data_reg[3]_i_11\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[3]_i_11_n_0\
    );
\o_data_reg[3]_i_12\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[3]_i_12_n_0\
    );
\o_data_reg[3]_i_13\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[3]_i_13_n_0\
    );
\o_data_reg[3]_i_14\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[3]_i_14_n_0\
    );
\o_data_reg[3]_i_15\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[3]_i_15_n_0\
    );
\o_data_reg[3]_i_16\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[3]_i_16_n_0\
    );
\o_data_reg[3]_i_17\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[3]_i_17_n_0\
    );
\o_data_reg[3]_i_18\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[3]_i_18_n_0\
    );
\o_data_reg[3]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FE00FF0DFE02FF0F"
    )
        port map (
      I0 => \o_data_reg[7]_i_4_n_0\,
      I1 => \o_data_reg[7]_i_5_n_0\,
      I2 => \o_data_reg[7]_i_6_n_0\,
      I3 => \o_data_reg[3]_i_6_n_0\,
      I4 => i_data_IBUF(0),
      I5 => data1(0),
      O => \o_data_reg[3]_i_2_n_0\
    );
\o_data_reg[3]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FCFFFCCCEEEEEEEE"
    )
        port map (
      I0 => data1(1),
      I1 => \o_data_reg[7]_i_6_n_0\,
      I2 => data3(1),
      I3 => \o_data_reg[7]_i_12_n_0\,
      I4 => data2(1),
      I5 => \o_data_reg[7]_i_5_n_0\,
      O => \o_data_reg[3]_i_3_n_0\
    );
\o_data_reg[3]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"01FF01FF01FF0101"
    )
        port map (
      I0 => \o_data_reg[7]_i_4_n_0\,
      I1 => \o_data_reg[7]_i_5_n_0\,
      I2 => \o_data_reg[7]_i_6_n_0\,
      I3 => \o_data_reg[3]_i_9_n_0\,
      I4 => \o_data_reg[5]_i_3_n_0\,
      I5 => \o_data_reg[3]_i_10_n_0\,
      O => \o_data_reg[3]_i_4_n_0\
    );
\o_data_reg[3]_i_5\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFD"
    )
        port map (
      I0 => \o_data_reg[7]_i_7_n_6\,
      I1 => \o_data_reg[7]_i_4_n_0\,
      I2 => \o_data_reg[7]_i_5_n_0\,
      I3 => \o_data_reg[7]_i_6_n_0\,
      O => \o_data_reg[3]_i_5_n_0\
    );
\o_data_reg[3]_i_6\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"33333133"
    )
        port map (
      I0 => \o_data_reg[4]_i_4_n_0\,
      I1 => i_data_IBUF(0),
      I2 => \o_data_reg[4]_i_2_n_0\,
      I3 => \o_data_reg[4]_i_3_n_0\,
      I4 => \wz_result_reg[2]_i_4_n_0\,
      O => \o_data_reg[3]_i_6_n_0\
    );
\o_data_reg[3]_i_7\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[3]_i_7_n_0\,
      CO(2) => \o_data_reg[3]_i_7_n_1\,
      CO(1) => \o_data_reg[3]_i_7_n_2\,
      CO(0) => \o_data_reg[3]_i_7_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => data3(3 downto 1),
      O(0) => \NLW_o_data_reg[3]_i_7_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[3]_i_11_n_0\,
      S(2) => \o_data_reg[3]_i_12_n_0\,
      S(1) => \o_data_reg[3]_i_13_n_0\,
      S(0) => \o_data_reg[3]_i_14_n_0\
    );
\o_data_reg[3]_i_8\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[3]_i_8_n_0\,
      CO(2) => \o_data_reg[3]_i_8_n_1\,
      CO(1) => \o_data_reg[3]_i_8_n_2\,
      CO(0) => \o_data_reg[3]_i_8_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => data2(3 downto 1),
      O(0) => \NLW_o_data_reg[3]_i_8_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[3]_i_15_n_0\,
      S(2) => \o_data_reg[3]_i_16_n_0\,
      S(1) => \o_data_reg[3]_i_17_n_0\,
      S(0) => \o_data_reg[3]_i_18_n_0\
    );
\o_data_reg[3]_i_9\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00D000F000D00000"
    )
        port map (
      I0 => \wz_result_reg[2]_i_4_n_0\,
      I1 => data4(1),
      I2 => \o_data_reg[4]_i_3_n_0\,
      I3 => \o_data_reg[4]_i_2_n_0\,
      I4 => \o_data_reg[4]_i_4_n_0\,
      I5 => data5(1),
      O => \o_data_reg[3]_i_9_n_0\
    );
\o_data_reg[4]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[4]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(4)
    );
\o_data_reg[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"C888FFFFC8880000"
    )
        port map (
      I0 => \o_data_reg[4]_i_2_n_0\,
      I1 => \o_data_reg[4]_i_3_n_0\,
      I2 => \o_data_reg[4]_i_4_n_0\,
      I3 => \o_data_reg[4]_i_5_n_0\,
      I4 => \o_data_reg[7]_i_1_n_0\,
      I5 => i_data_IBUF(4),
      O => \o_data_reg[4]_i_1_n_0\
    );
\o_data_reg[4]_i_10\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[4]_i_11_n_0\,
      CO(3) => \NLW_o_data_reg[4]_i_10_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[4]_i_10_n_1\,
      CO(1) => \o_data_reg[4]_i_10_n_2\,
      CO(0) => \o_data_reg[4]_i_10_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => data5(7 downto 4),
      S(3) => \o_data_reg[4]_i_28_n_0\,
      S(2) => \o_data_reg[4]_i_29_n_0\,
      S(1) => \o_data_reg[4]_i_30_n_0\,
      S(0) => \o_data_reg[4]_i_31_n_0\
    );
\o_data_reg[4]_i_11\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[4]_i_11_n_0\,
      CO(2) => \o_data_reg[4]_i_11_n_1\,
      CO(1) => \o_data_reg[4]_i_11_n_2\,
      CO(0) => \o_data_reg[4]_i_11_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => data5(3 downto 1),
      O(0) => \NLW_o_data_reg[4]_i_11_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[4]_i_32_n_0\,
      S(2) => \o_data_reg[4]_i_33_n_0\,
      S(1) => \o_data_reg[4]_i_34_n_0\,
      S(0) => \o_data_reg[4]_i_35_n_0\
    );
\o_data_reg[4]_i_12\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[4]_i_12_n_0\
    );
\o_data_reg[4]_i_13\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[4]_i_13_n_0\
    );
\o_data_reg[4]_i_14\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[4]_i_14_n_0\
    );
\o_data_reg[4]_i_15\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[4]_i_15_n_0\
    );
\o_data_reg[4]_i_16\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[4]_i_16_n_0\
    );
\o_data_reg[4]_i_17\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[4]_i_17_n_0\
    );
\o_data_reg[4]_i_18\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[4]_i_18_n_0\
    );
\o_data_reg[4]_i_19\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[4]_i_19_n_0\
    );
\o_data_reg[4]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => wz_result21_in(4),
      I1 => wz_result21_in(5),
      I2 => wz_result21_in(6),
      I3 => wz_result21_in(2),
      I4 => wz_result21_in(7),
      I5 => wz_result21_in(3),
      O => \o_data_reg[4]_i_2_n_0\
    );
\o_data_reg[4]_i_20\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[4]_i_20_n_0\
    );
\o_data_reg[4]_i_21\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[4]_i_21_n_0\
    );
\o_data_reg[4]_i_22\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[4]_i_22_n_0\
    );
\o_data_reg[4]_i_23\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[4]_i_23_n_0\
    );
\o_data_reg[4]_i_24\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[4]_i_24_n_0\
    );
\o_data_reg[4]_i_25\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[4]_i_25_n_0\
    );
\o_data_reg[4]_i_26\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[4]_i_26_n_0\
    );
\o_data_reg[4]_i_27\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[4]_i_27_n_0\
    );
\o_data_reg[4]_i_28\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[4]_i_28_n_0\
    );
\o_data_reg[4]_i_29\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[4]_i_29_n_0\
    );
\o_data_reg[4]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => wz_result2(2),
      I1 => wz_result2(3),
      I2 => wz_result2(7),
      I3 => wz_result2(5),
      I4 => wz_result2(6),
      I5 => wz_result2(4),
      O => \o_data_reg[4]_i_3_n_0\
    );
\o_data_reg[4]_i_30\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[4]_i_30_n_0\
    );
\o_data_reg[4]_i_31\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[4]_i_31_n_0\
    );
\o_data_reg[4]_i_32\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[4]_i_32_n_0\
    );
\o_data_reg[4]_i_33\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[4]_i_33_n_0\
    );
\o_data_reg[4]_i_34\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[4]_i_34_n_0\
    );
\o_data_reg[4]_i_35\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[4]_i_35_n_0\
    );
\o_data_reg[4]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => data5(6),
      I1 => data5(2),
      I2 => data5(7),
      I3 => data5(3),
      I4 => data5(4),
      I5 => data5(5),
      O => \o_data_reg[4]_i_4_n_0\
    );
\o_data_reg[4]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF00FFFFFF00FF54"
    )
        port map (
      I0 => \o_data_reg[7]_i_4_n_0\,
      I1 => wz_result(0),
      I2 => \o_data_reg[7]_i_3_n_0\,
      I3 => \wz_result_reg[2]_i_4_n_0\,
      I4 => \o_data_reg[7]_i_12_n_0\,
      I5 => \o_data_reg[7]_i_11_n_0\,
      O => \o_data_reg[4]_i_5_n_0\
    );
\o_data_reg[4]_i_6\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[4]_i_7_n_0\,
      CO(3) => \NLW_o_data_reg[4]_i_6_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[4]_i_6_n_1\,
      CO(1) => \o_data_reg[4]_i_6_n_2\,
      CO(0) => \o_data_reg[4]_i_6_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => wz_result21_in(7 downto 4),
      S(3) => \o_data_reg[4]_i_12_n_0\,
      S(2) => \o_data_reg[4]_i_13_n_0\,
      S(1) => \o_data_reg[4]_i_14_n_0\,
      S(0) => \o_data_reg[4]_i_15_n_0\
    );
\o_data_reg[4]_i_7\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[4]_i_7_n_0\,
      CO(2) => \o_data_reg[4]_i_7_n_1\,
      CO(1) => \o_data_reg[4]_i_7_n_2\,
      CO(0) => \o_data_reg[4]_i_7_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => wz_result21_in(3 downto 1),
      O(0) => \NLW_o_data_reg[4]_i_7_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[4]_i_16_n_0\,
      S(2) => \o_data_reg[4]_i_17_n_0\,
      S(1) => \o_data_reg[4]_i_18_n_0\,
      S(0) => \o_data_reg[4]_i_19_n_0\
    );
\o_data_reg[4]_i_8\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[4]_i_8_n_0\,
      CO(2) => \o_data_reg[4]_i_8_n_1\,
      CO(1) => \o_data_reg[4]_i_8_n_2\,
      CO(0) => \o_data_reg[4]_i_8_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => wz_result2(3 downto 1),
      O(0) => \NLW_o_data_reg[4]_i_8_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[4]_i_20_n_0\,
      S(2) => \o_data_reg[4]_i_21_n_0\,
      S(1) => \o_data_reg[4]_i_22_n_0\,
      S(0) => \o_data_reg[4]_i_23_n_0\
    );
\o_data_reg[4]_i_9\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[4]_i_8_n_0\,
      CO(3) => \NLW_o_data_reg[4]_i_9_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[4]_i_9_n_1\,
      CO(1) => \o_data_reg[4]_i_9_n_2\,
      CO(0) => \o_data_reg[4]_i_9_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => wz_result2(7 downto 4),
      S(3) => \o_data_reg[4]_i_24_n_0\,
      S(2) => \o_data_reg[4]_i_25_n_0\,
      S(1) => \o_data_reg[4]_i_26_n_0\,
      S(0) => \o_data_reg[4]_i_27_n_0\
    );
\o_data_reg[5]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[5]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(5)
    );
\o_data_reg[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => \o_data_reg[5]_i_2_n_0\,
      I1 => \o_data_reg[7]_i_1_n_0\,
      I2 => i_data_IBUF(5),
      O => \o_data_reg[5]_i_1_n_0\
    );
\o_data_reg[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAAAAA2220AAAA"
    )
        port map (
      I0 => \o_data_reg[5]_i_3_n_0\,
      I1 => \o_data_reg[7]_i_5_n_0\,
      I2 => \o_data_reg[5]_i_4_n_0\,
      I3 => wz_result(1),
      I4 => \o_data_reg[4]_i_4_n_0\,
      I5 => \wz_result_reg[2]_i_4_n_0\,
      O => \o_data_reg[5]_i_2_n_0\
    );
\o_data_reg[5]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \o_data_reg[4]_i_3_n_0\,
      I1 => \o_data_reg[4]_i_2_n_0\,
      O => \o_data_reg[5]_i_3_n_0\
    );
\o_data_reg[5]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \o_data_reg[7]_i_3_n_0\,
      I1 => \o_data_reg[7]_i_4_n_0\,
      O => \o_data_reg[5]_i_4_n_0\
    );
\o_data_reg[6]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[6]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(6)
    );
\o_data_reg[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F4"
    )
        port map (
      I0 => \o_data_reg[7]_i_1_n_0\,
      I1 => i_data_IBUF(6),
      I2 => \wz_result_reg[2]_i_1_n_0\,
      O => \o_data_reg[6]_i_1_n_0\
    );
\o_data_reg[7]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \o_data_reg[7]_i_1_n_0\,
      G => \o_data_reg[7]_i_2_n_0\,
      GE => '1',
      Q => o_data_OBUF(7)
    );
\o_data_reg[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => \o_data_reg[7]_i_3_n_0\,
      I1 => \o_data_reg[7]_i_4_n_0\,
      I2 => \o_data_reg[7]_i_5_n_0\,
      I3 => \o_data_reg[7]_i_6_n_0\,
      O => \o_data_reg[7]_i_1_n_0\
    );
\o_data_reg[7]_i_10\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[7]_i_9_n_0\,
      CO(3) => \NLW_o_data_reg[7]_i_10_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[7]_i_10_n_1\,
      CO(1) => \o_data_reg[7]_i_10_n_2\,
      CO(0) => \o_data_reg[7]_i_10_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => data1(7 downto 4),
      S(3) => \o_data_reg[7]_i_25_n_0\,
      S(2) => \o_data_reg[7]_i_26_n_0\,
      S(1) => \o_data_reg[7]_i_27_n_0\,
      S(0) => \o_data_reg[7]_i_28_n_0\
    );
\o_data_reg[7]_i_11\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => data2(7),
      I1 => data2(5),
      I2 => data2(6),
      I3 => data2(4),
      I4 => data2(2),
      I5 => data2(3),
      O => \o_data_reg[7]_i_11_n_0\
    );
\o_data_reg[7]_i_12\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => data3(7),
      I1 => data3(5),
      I2 => data3(6),
      I3 => data3(4),
      I4 => data3(2),
      I5 => data3(3),
      O => \o_data_reg[7]_i_12_n_0\
    );
\o_data_reg[7]_i_13\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[7]_i_13_n_0\
    );
\o_data_reg[7]_i_14\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[7]_i_14_n_0\
    );
\o_data_reg[7]_i_15\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[7]_i_15_n_0\
    );
\o_data_reg[7]_i_16\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[7]_i_16_n_0\
    );
\o_data_reg[7]_i_17\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[7]_i_17_n_0\
    );
\o_data_reg[7]_i_18\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[7]_i_18_n_0\
    );
\o_data_reg[7]_i_19\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[7]_i_19_n_0\
    );
\o_data_reg[7]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(1),
      I2 => current_state(2),
      O => \o_data_reg[7]_i_2_n_0\
    );
\o_data_reg[7]_i_20\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[7]_i_20_n_0\
    );
\o_data_reg[7]_i_21\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \o_data_reg[7]_i_21_n_0\
    );
\o_data_reg[7]_i_22\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \o_data_reg[7]_i_22_n_0\
    );
\o_data_reg[7]_i_23\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \o_data_reg[7]_i_23_n_0\
    );
\o_data_reg[7]_i_24\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \o_data_reg[7]_i_24_n_0\
    );
\o_data_reg[7]_i_25\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[7]_i_25_n_0\
    );
\o_data_reg[7]_i_26\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[7]_i_26_n_0\
    );
\o_data_reg[7]_i_27\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[7]_i_27_n_0\
    );
\o_data_reg[7]_i_28\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[7]_i_28_n_0\
    );
\o_data_reg[7]_i_29\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[3]_i_8_n_0\,
      CO(3) => \NLW_o_data_reg[7]_i_29_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[7]_i_29_n_1\,
      CO(1) => \o_data_reg[7]_i_29_n_2\,
      CO(0) => \o_data_reg[7]_i_29_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => data2(7 downto 4),
      S(3) => \o_data_reg[7]_i_31_n_0\,
      S(2) => \o_data_reg[7]_i_32_n_0\,
      S(1) => \o_data_reg[7]_i_33_n_0\,
      S(0) => \o_data_reg[7]_i_34_n_0\
    );
\o_data_reg[7]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => \o_data_reg[7]_i_7_n_4\,
      I1 => \o_data_reg[7]_i_8_n_7\,
      I2 => \o_data_reg[7]_i_8_n_4\,
      I3 => \o_data_reg[7]_i_7_n_5\,
      I4 => \o_data_reg[7]_i_8_n_5\,
      I5 => \o_data_reg[7]_i_8_n_6\,
      O => \o_data_reg[7]_i_3_n_0\
    );
\o_data_reg[7]_i_30\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[3]_i_7_n_0\,
      CO(3) => \NLW_o_data_reg[7]_i_30_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[7]_i_30_n_1\,
      CO(1) => \o_data_reg[7]_i_30_n_2\,
      CO(0) => \o_data_reg[7]_i_30_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => data3(7 downto 4),
      S(3) => \o_data_reg[7]_i_35_n_0\,
      S(2) => \o_data_reg[7]_i_36_n_0\,
      S(1) => \o_data_reg[7]_i_37_n_0\,
      S(0) => \o_data_reg[7]_i_38_n_0\
    );
\o_data_reg[7]_i_31\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[7]_i_31_n_0\
    );
\o_data_reg[7]_i_32\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[7]_i_32_n_0\
    );
\o_data_reg[7]_i_33\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[7]_i_33_n_0\
    );
\o_data_reg[7]_i_34\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[7]_i_34_n_0\
    );
\o_data_reg[7]_i_35\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \o_data_reg[7]_i_35_n_0\
    );
\o_data_reg[7]_i_36\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \o_data_reg[7]_i_36_n_0\
    );
\o_data_reg[7]_i_37\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \o_data_reg[7]_i_37_n_0\
    );
\o_data_reg[7]_i_38\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \o_data_reg[7]_i_38_n_0\
    );
\o_data_reg[7]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => data1(2),
      I1 => data1(5),
      I2 => data1(7),
      I3 => data1(4),
      I4 => data1(6),
      I5 => data1(3),
      O => \o_data_reg[7]_i_4_n_0\
    );
\o_data_reg[7]_i_5\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \o_data_reg[7]_i_11_n_0\,
      I1 => \o_data_reg[7]_i_12_n_0\,
      O => \o_data_reg[7]_i_5_n_0\
    );
\o_data_reg[7]_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FBFF"
    )
        port map (
      I0 => \o_data_reg[4]_i_2_n_0\,
      I1 => \o_data_reg[4]_i_3_n_0\,
      I2 => \wz_result_reg[2]_i_4_n_0\,
      I3 => \o_data_reg[4]_i_4_n_0\,
      O => \o_data_reg[7]_i_6_n_0\
    );
\o_data_reg[7]_i_7\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[7]_i_7_n_0\,
      CO(2) => \o_data_reg[7]_i_7_n_1\,
      CO(1) => \o_data_reg[7]_i_7_n_2\,
      CO(0) => \o_data_reg[7]_i_7_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3) => \o_data_reg[7]_i_7_n_4\,
      O(2) => \o_data_reg[7]_i_7_n_5\,
      O(1) => \o_data_reg[7]_i_7_n_6\,
      O(0) => \NLW_o_data_reg[7]_i_7_O_UNCONNECTED\(0),
      S(3) => \o_data_reg[7]_i_13_n_0\,
      S(2) => \o_data_reg[7]_i_14_n_0\,
      S(1) => \o_data_reg[7]_i_15_n_0\,
      S(0) => \o_data_reg[7]_i_16_n_0\
    );
\o_data_reg[7]_i_8\: unisim.vcomponents.CARRY4
     port map (
      CI => \o_data_reg[7]_i_7_n_0\,
      CO(3) => \NLW_o_data_reg[7]_i_8_CO_UNCONNECTED\(3),
      CO(2) => \o_data_reg[7]_i_8_n_1\,
      CO(1) => \o_data_reg[7]_i_8_n_2\,
      CO(0) => \o_data_reg[7]_i_8_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3) => \o_data_reg[7]_i_8_n_4\,
      O(2) => \o_data_reg[7]_i_8_n_5\,
      O(1) => \o_data_reg[7]_i_8_n_6\,
      O(0) => \o_data_reg[7]_i_8_n_7\,
      S(3) => \o_data_reg[7]_i_17_n_0\,
      S(2) => \o_data_reg[7]_i_18_n_0\,
      S(1) => \o_data_reg[7]_i_19_n_0\,
      S(0) => \o_data_reg[7]_i_20_n_0\
    );
\o_data_reg[7]_i_9\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \o_data_reg[7]_i_9_n_0\,
      CO(2) => \o_data_reg[7]_i_9_n_1\,
      CO(1) => \o_data_reg[7]_i_9_n_2\,
      CO(0) => \o_data_reg[7]_i_9_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 0) => data1(3 downto 0),
      S(3) => \o_data_reg[7]_i_21_n_0\,
      S(2) => \o_data_reg[7]_i_22_n_0\,
      S(1) => \o_data_reg[7]_i_23_n_0\,
      S(0) => \o_data_reg[7]_i_24_n_0\
    );
o_done_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_done_OBUF,
      O => o_done
    );
o_done_reg: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => o_done_reg_i_1_n_0,
      G => o_done_reg_i_2_n_0,
      GE => '1',
      Q => o_done_OBUF
    );
\o_done_reg__0\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => '0',
      G => i_rst_IBUF_BUFG,
      GE => '1',
      Q => o_done_OBUF
    );
o_done_reg_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2F"
    )
        port map (
      I0 => i_start_IBUF,
      I1 => current_state(1),
      I2 => current_state(2),
      O => o_done_reg_i_1_n_0
    );
o_done_reg_i_2: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0818"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(1),
      I2 => current_state(2),
      I3 => i_start_IBUF,
      O => o_done_reg_i_2_n_0
    );
o_en_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_en_OBUF,
      O => o_en
    );
o_en_reg: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => o_en_reg_i_1_n_0,
      G => o_en_reg_i_2_n_0,
      GE => '1',
      Q => o_en_OBUF
    );
\o_en_reg__0\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => '0',
      G => i_rst_IBUF_BUFG,
      GE => '1',
      Q => o_en_OBUF
    );
o_en_reg_i_1: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => current_state(1),
      O => o_en_reg_i_1_n_0
    );
o_en_reg_i_2: unisim.vcomponents.LUT3
    generic map(
      INIT => X"45"
    )
        port map (
      I0 => current_state(2),
      I1 => current_state(0),
      I2 => current_state(1),
      O => o_en_reg_i_2_n_0
    );
o_we_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_we_OBUF,
      O => o_we
    );
o_we_reg: unisim.vcomponents.LDCE
    generic map(
      INIT => '0',
      IS_G_INVERTED => '1'
    )
        port map (
      CLR => '0',
      D => o_we_reg_i_1_n_0,
      G => current_state(2),
      GE => '1',
      Q => o_we_OBUF
    );
o_we_reg_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"10"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      O => o_we_reg_i_1_n_0
    );
\wz_result_reg[0]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \wz_result_reg[0]_i_1_n_0\,
      G => \wz_result__0\,
      GE => '1',
      Q => wz_result(0)
    );
\wz_result_reg[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"C8880000"
    )
        port map (
      I0 => \o_data_reg[4]_i_2_n_0\,
      I1 => \o_data_reg[4]_i_3_n_0\,
      I2 => \o_data_reg[4]_i_4_n_0\,
      I3 => \o_data_reg[4]_i_5_n_0\,
      I4 => \o_data_reg[7]_i_1_n_0\,
      O => \wz_result_reg[0]_i_1_n_0\
    );
\wz_result_reg[1]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \wz_result_reg[1]_i_1_n_0\,
      G => \wz_result__0\,
      GE => '1',
      Q => wz_result(1)
    );
\wz_result_reg[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \o_data_reg[5]_i_2_n_0\,
      I1 => \o_data_reg[7]_i_1_n_0\,
      O => \wz_result_reg[1]_i_1_n_0\
    );
\wz_result_reg[2]\: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => \wz_result_reg[2]_i_1_n_0\,
      G => \wz_result__0\,
      GE => '1',
      Q => wz_result(2)
    );
\wz_result_reg[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000F0FF00FFE0"
    )
        port map (
      I0 => \o_data_reg[7]_i_4_n_0\,
      I1 => \o_data_reg[7]_i_3_n_0\,
      I2 => \wz_result_reg[2]_i_3_n_0\,
      I3 => \o_data_reg[7]_i_5_n_0\,
      I4 => \wz_result_reg[2]_i_4_n_0\,
      I5 => \o_data_reg[7]_i_6_n_0\,
      O => \wz_result_reg[2]_i_1_n_0\
    );
\wz_result_reg[2]_i_10\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(4),
      O => \wz_result_reg[2]_i_10_n_0\
    );
\wz_result_reg[2]_i_11\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(3),
      O => \wz_result_reg[2]_i_11_n_0\
    );
\wz_result_reg[2]_i_12\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(2),
      O => \wz_result_reg[2]_i_12_n_0\
    );
\wz_result_reg[2]_i_13\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(1),
      O => \wz_result_reg[2]_i_13_n_0\
    );
\wz_result_reg[2]_i_14\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(0),
      O => \wz_result_reg[2]_i_14_n_0\
    );
\wz_result_reg[2]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0200"
    )
        port map (
      I0 => \o_data_reg[7]_i_1_n_0\,
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => current_state(0),
      O => \wz_result__0\
    );
\wz_result_reg[2]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0808080808080800"
    )
        port map (
      I0 => \o_data_reg[4]_i_4_n_0\,
      I1 => \o_data_reg[4]_i_3_n_0\,
      I2 => \o_data_reg[4]_i_2_n_0\,
      I3 => \o_data_reg[7]_i_3_n_0\,
      I4 => \o_data_reg[7]_i_4_n_0\,
      I5 => wz_result(2),
      O => \wz_result_reg[2]_i_3_n_0\
    );
\wz_result_reg[2]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => data4(7),
      I1 => data4(6),
      I2 => data4(5),
      I3 => data4(4),
      I4 => data4(2),
      I5 => data4(3),
      O => \wz_result_reg[2]_i_4_n_0\
    );
\wz_result_reg[2]_i_5\: unisim.vcomponents.CARRY4
     port map (
      CI => \wz_result_reg[2]_i_6_n_0\,
      CO(3) => \NLW_wz_result_reg[2]_i_5_CO_UNCONNECTED\(3),
      CO(2) => \wz_result_reg[2]_i_5_n_1\,
      CO(1) => \wz_result_reg[2]_i_5_n_2\,
      CO(0) => \wz_result_reg[2]_i_5_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2 downto 0) => i_data_IBUF(6 downto 4),
      O(3 downto 0) => data4(7 downto 4),
      S(3) => \wz_result_reg[2]_i_7_n_0\,
      S(2) => \wz_result_reg[2]_i_8_n_0\,
      S(1) => \wz_result_reg[2]_i_9_n_0\,
      S(0) => \wz_result_reg[2]_i_10_n_0\
    );
\wz_result_reg[2]_i_6\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \wz_result_reg[2]_i_6_n_0\,
      CO(2) => \wz_result_reg[2]_i_6_n_1\,
      CO(1) => \wz_result_reg[2]_i_6_n_2\,
      CO(0) => \wz_result_reg[2]_i_6_n_3\,
      CYINIT => '1',
      DI(3 downto 0) => i_data_IBUF(3 downto 0),
      O(3 downto 1) => data4(3 downto 1),
      O(0) => \NLW_wz_result_reg[2]_i_6_O_UNCONNECTED\(0),
      S(3) => \wz_result_reg[2]_i_11_n_0\,
      S(2) => \wz_result_reg[2]_i_12_n_0\,
      S(1) => \wz_result_reg[2]_i_13_n_0\,
      S(0) => \wz_result_reg[2]_i_14_n_0\
    );
\wz_result_reg[2]_i_7\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(7),
      O => \wz_result_reg[2]_i_7_n_0\
    );
\wz_result_reg[2]_i_8\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(6),
      O => \wz_result_reg[2]_i_8_n_0\
    );
\wz_result_reg[2]_i_9\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => i_data_IBUF(5),
      O => \wz_result_reg[2]_i_9_n_0\
    );
end STRUCTURE;
