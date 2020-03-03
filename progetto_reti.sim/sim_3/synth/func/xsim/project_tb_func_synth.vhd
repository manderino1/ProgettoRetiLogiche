-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Tue Mar  3 20:52:06 2020
-- Host        : LAPTOP-DO4A1RG6 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -mode funcsim -nolib -force -file
--               D:/Progetto/ProgettoRetiLogiche/progetto_reti.sim/sim_3/synth/func/xsim/project_tb_func_synth.vhd
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
  signal current_load : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \current_load[0]_i_1_n_0\ : STD_LOGIC;
  signal \current_load[1]_i_1_n_0\ : STD_LOGIC;
  signal \current_load[2]_i_1_n_0\ : STD_LOGIC;
  signal \current_load[3]__0_i_1_n_0\ : STD_LOGIC;
  signal \current_load[3]_i_1_n_0\ : STD_LOGIC;
  signal \current_load[3]_i_2_n_0\ : STD_LOGIC;
  signal current_state : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \current_state[0]__0_i_1_n_0\ : STD_LOGIC;
  signal \current_state[0]_i_1_n_0\ : STD_LOGIC;
  signal \current_state[1]__0_i_1_n_0\ : STD_LOGIC;
  signal \current_state[1]_i_1_n_0\ : STD_LOGIC;
  signal \current_state[2]__0_i_1_n_0\ : STD_LOGIC;
  signal \current_state[2]__0_i_2_n_0\ : STD_LOGIC;
  signal \current_state[2]_i_1_n_0\ : STD_LOGIC;
  signal i_clk_IBUF : STD_LOGIC;
  signal i_clk_IBUF_BUFG : STD_LOGIC;
  signal i_data_IBUF : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal i_rst_IBUF : STD_LOGIC;
  signal i_start_IBUF : STD_LOGIC;
  signal \o_address[0]_i_1_n_0\ : STD_LOGIC;
  signal \o_address[15]__0_i_1_n_0\ : STD_LOGIC;
  signal \o_address[15]_i_1_n_0\ : STD_LOGIC;
  signal \o_address[1]_i_1_n_0\ : STD_LOGIC;
  signal \o_address[2]_i_1_n_0\ : STD_LOGIC;
  signal o_address_OBUF : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal \o_data[6]_i_1_n_0\ : STD_LOGIC;
  signal o_data_OBUF : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal o_done_OBUF : STD_LOGIC;
  signal o_done_i_1_n_0 : STD_LOGIC;
  signal o_done_i_2_n_0 : STD_LOGIC;
  signal o_en_OBUF : STD_LOGIC;
  signal \o_en__0_i_1_n_0\ : STD_LOGIC;
  signal \o_en__0_i_2_n_0\ : STD_LOGIC;
  signal o_en_i_1_n_0 : STD_LOGIC;
  signal o_en_i_2_n_0 : STD_LOGIC;
  signal o_we_OBUF : STD_LOGIC;
  signal \o_we__0_i_1_n_0\ : STD_LOGIC;
  signal \o_we__0_i_2_n_0\ : STD_LOGIC;
begin
\current_load[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => current_load(3),
      I1 => current_load(0),
      O => \current_load[0]_i_1_n_0\
    );
\current_load[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"06"
    )
        port map (
      I0 => current_load(0),
      I1 => current_load(1),
      I2 => current_load(3),
      O => \current_load[1]_i_1_n_0\
    );
\current_load[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0078"
    )
        port map (
      I0 => current_load(1),
      I1 => current_load(0),
      I2 => current_load(2),
      I3 => current_load(3),
      O => \current_load[2]_i_1_n_0\
    );
\current_load[3]__0_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0080"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => i_rst_IBUF,
      O => \current_load[3]__0_i_1_n_0\
    );
\current_load[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => current_load(0),
      I1 => current_load(3),
      O => \current_load[3]_i_1_n_0\
    );
\current_load[3]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0081"
    )
        port map (
      I0 => current_load(0),
      I1 => current_load(1),
      I2 => current_load(2),
      I3 => current_load(3),
      O => \current_load[3]_i_2_n_0\
    );
\current_load_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]_i_1_n_0\,
      D => \current_load[0]_i_1_n_0\,
      Q => current_load(0),
      R => '0'
    );
\current_load_reg[0]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]__0_i_1_n_0\,
      D => i_rst_IBUF,
      Q => current_load(0),
      R => '0'
    );
\current_load_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]_i_1_n_0\,
      D => \current_load[1]_i_1_n_0\,
      Q => current_load(1),
      R => '0'
    );
\current_load_reg[1]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]__0_i_1_n_0\,
      D => i_rst_IBUF,
      Q => current_load(1),
      R => '0'
    );
\current_load_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]_i_1_n_0\,
      D => \current_load[2]_i_1_n_0\,
      Q => current_load(2),
      R => '0'
    );
\current_load_reg[2]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]__0_i_1_n_0\,
      D => i_rst_IBUF,
      Q => current_load(2),
      R => '0'
    );
\current_load_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]_i_1_n_0\,
      D => \current_load[3]_i_2_n_0\,
      Q => current_load(3),
      R => '0'
    );
\current_load_reg[3]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_load[3]__0_i_1_n_0\,
      D => i_rst_IBUF,
      Q => current_load(3),
      R => '0'
    );
\current_state[0]__0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"0D"
    )
        port map (
      I0 => current_state(1),
      I1 => current_state(2),
      I2 => current_state(0),
      O => \current_state[0]__0_i_1_n_0\
    );
\current_state[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F704"
    )
        port map (
      I0 => i_start_IBUF,
      I1 => current_load(3),
      I2 => current_load(0),
      I3 => current_state(0),
      O => \current_state[0]_i_1_n_0\
    );
\current_state[1]__0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => current_state(2),
      I1 => current_state(0),
      I2 => current_state(1),
      O => \current_state[1]__0_i_1_n_0\
    );
\current_state[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F704"
    )
        port map (
      I0 => i_start_IBUF,
      I1 => current_load(3),
      I2 => current_load(0),
      I3 => current_state(1),
      O => \current_state[1]_i_1_n_0\
    );
\current_state[2]__0_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"77F7"
    )
        port map (
      I0 => current_state(1),
      I1 => current_state(0),
      I2 => i_start_IBUF,
      I3 => current_state(2),
      O => \current_state[2]__0_i_1_n_0\
    );
\current_state[2]__0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"34"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(1),
      I2 => current_state(2),
      O => \current_state[2]__0_i_2_n_0\
    );
\current_state[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"D0"
    )
        port map (
      I0 => current_load(3),
      I1 => current_load(0),
      I2 => current_state(2),
      O => \current_state[2]_i_1_n_0\
    );
\current_state_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      D => \current_state[0]_i_1_n_0\,
      Q => current_state(0),
      R => '0'
    );
\current_state_reg[0]__0\: unisim.vcomponents.FDPE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_state[2]__0_i_1_n_0\,
      D => \current_state[0]__0_i_1_n_0\,
      PRE => i_rst_IBUF,
      Q => current_state(0)
    );
\current_state_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      D => \current_state[1]_i_1_n_0\,
      Q => current_state(1),
      R => '0'
    );
\current_state_reg[1]__0\: unisim.vcomponents.FDPE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_state[2]__0_i_1_n_0\,
      D => \current_state[1]__0_i_1_n_0\,
      PRE => i_rst_IBUF,
      Q => current_state(1)
    );
\current_state_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => '1',
      D => \current_state[2]_i_1_n_0\,
      Q => current_state(2),
      R => '0'
    );
\current_state_reg[2]__0\: unisim.vcomponents.FDPE
    generic map(
      INIT => '1'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \current_state[2]__0_i_1_n_0\,
      D => \current_state[2]__0_i_2_n_0\,
      PRE => i_rst_IBUF,
      Q => current_state(2)
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
\o_address[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FBBA"
    )
        port map (
      I0 => current_load(3),
      I1 => current_load(0),
      I2 => current_load(2),
      I3 => current_load(1),
      O => \o_address[0]_i_1_n_0\
    );
\o_address[15]__0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(1),
      I2 => i_rst_IBUF,
      O => \o_address[15]__0_i_1_n_0\
    );
\o_address[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"57F3"
    )
        port map (
      I0 => current_load(2),
      I1 => current_load(3),
      I2 => current_load(0),
      I3 => current_load(1),
      O => \o_address[15]_i_1_n_0\
    );
\o_address[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"00DA"
    )
        port map (
      I0 => current_load(0),
      I1 => current_load(2),
      I2 => current_load(1),
      I3 => current_load(3),
      O => \o_address[1]_i_1_n_0\
    );
\o_address[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"00EC"
    )
        port map (
      I0 => current_load(1),
      I1 => current_load(2),
      I2 => current_load(0),
      I3 => current_load(3),
      O => \o_address[2]_i_1_n_0\
    );
\o_address_OBUF[0]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(0),
      O => o_address(0)
    );
\o_address_OBUF[10]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(10),
      O => o_address(10)
    );
\o_address_OBUF[11]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(11),
      O => o_address(11)
    );
\o_address_OBUF[12]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(12),
      O => o_address(12)
    );
\o_address_OBUF[13]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(13),
      O => o_address(13)
    );
\o_address_OBUF[14]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(14),
      O => o_address(14)
    );
\o_address_OBUF[15]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(15),
      O => o_address(15)
    );
\o_address_OBUF[1]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(1),
      O => o_address(1)
    );
\o_address_OBUF[2]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(2),
      O => o_address(2)
    );
\o_address_OBUF[3]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(3),
      O => o_address(3)
    );
\o_address_OBUF[4]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(4),
      O => o_address(4)
    );
\o_address_OBUF[5]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(5),
      O => o_address(5)
    );
\o_address_OBUF[6]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(6),
      O => o_address(6)
    );
\o_address_OBUF[7]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(7),
      O => o_address(7)
    );
\o_address_OBUF[8]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(8),
      O => o_address(8)
    );
\o_address_OBUF[9]_inst\: unisim.vcomponents.OBUF
     port map (
      I => o_address_OBUF(9),
      O => o_address(9)
    );
\o_address_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => \o_address[0]_i_1_n_0\,
      Q => o_address_OBUF(0),
      R => '0'
    );
\o_address_reg[0]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => current_state(2),
      Q => o_address_OBUF(0),
      R => '0'
    );
\o_address_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(10),
      R => '0'
    );
\o_address_reg[10]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(10),
      R => '0'
    );
\o_address_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(11),
      R => '0'
    );
\o_address_reg[11]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(11),
      R => '0'
    );
\o_address_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(12),
      R => '0'
    );
\o_address_reg[12]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(12),
      R => '0'
    );
\o_address_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(13),
      R => '0'
    );
\o_address_reg[13]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(13),
      R => '0'
    );
\o_address_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(14),
      R => '0'
    );
\o_address_reg[14]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(14),
      R => '0'
    );
\o_address_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(15),
      R => '0'
    );
\o_address_reg[15]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(15),
      R => '0'
    );
\o_address_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => \o_address[1]_i_1_n_0\,
      Q => o_address_OBUF(1),
      R => '0'
    );
\o_address_reg[1]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(1),
      R => '0'
    );
\o_address_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => \o_address[2]_i_1_n_0\,
      Q => o_address_OBUF(2),
      R => '0'
    );
\o_address_reg[2]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(2),
      R => '0'
    );
\o_address_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(3),
      R => '0'
    );
\o_address_reg[3]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '1',
      Q => o_address_OBUF(3),
      R => '0'
    );
\o_address_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(4),
      R => '0'
    );
\o_address_reg[4]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(4),
      R => '0'
    );
\o_address_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(5),
      R => '0'
    );
\o_address_reg[5]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(5),
      R => '0'
    );
\o_address_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(6),
      R => '0'
    );
\o_address_reg[6]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(6),
      R => '0'
    );
\o_address_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(7),
      R => '0'
    );
\o_address_reg[7]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(7),
      R => '0'
    );
\o_address_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(8),
      R => '0'
    );
\o_address_reg[8]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(8),
      R => '0'
    );
\o_address_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(9),
      R => '0'
    );
\o_address_reg[9]__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_address[15]__0_i_1_n_0\,
      D => '0',
      Q => o_address_OBUF(9),
      R => '0'
    );
\o_data[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => current_state(2),
      I1 => current_state(1),
      I2 => current_state(0),
      I3 => i_rst_IBUF,
      O => \o_data[6]_i_1_n_0\
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
      I => '0',
      O => o_data(7)
    );
\o_data_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(0),
      Q => o_data_OBUF(0),
      R => '0'
    );
\o_data_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(1),
      Q => o_data_OBUF(1),
      R => '0'
    );
\o_data_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(2),
      Q => o_data_OBUF(2),
      R => '0'
    );
\o_data_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(3),
      Q => o_data_OBUF(3),
      R => '0'
    );
\o_data_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(4),
      Q => o_data_OBUF(4),
      R => '0'
    );
\o_data_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(5),
      Q => o_data_OBUF(5),
      R => '0'
    );
\o_data_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_data[6]_i_1_n_0\,
      D => i_data_IBUF(6),
      Q => o_data_OBUF(6),
      R => '0'
    );
o_done_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_done_OBUF,
      O => o_done
    );
o_done_i_1: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0828"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => i_start_IBUF,
      O => o_done_i_1_n_0
    );
o_done_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => current_state(2),
      I1 => i_start_IBUF,
      O => o_done_i_2_n_0
    );
o_done_reg: unisim.vcomponents.FDCE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => o_done_i_1_n_0,
      CLR => i_rst_IBUF,
      D => o_done_i_2_n_0,
      Q => o_done_OBUF
    );
o_en_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_en_OBUF,
      O => o_en
    );
\o_en__0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"43"
    )
        port map (
      I0 => current_state(1),
      I1 => current_state(0),
      I2 => current_state(2),
      O => \o_en__0_i_1_n_0\
    );
\o_en__0_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => current_state(2),
      O => \o_en__0_i_2_n_0\
    );
o_en_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => current_load(3),
      I1 => current_load(0),
      O => o_en_i_1_n_0
    );
o_en_i_2: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => current_load(3),
      O => o_en_i_2_n_0
    );
o_en_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => o_en_i_1_n_0,
      D => o_en_i_2_n_0,
      Q => o_en_OBUF,
      R => '0'
    );
\o_en_reg__0\: unisim.vcomponents.FDCE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_en__0_i_1_n_0\,
      CLR => i_rst_IBUF,
      D => \o_en__0_i_2_n_0\,
      Q => o_en_OBUF
    );
o_we_OBUF_inst: unisim.vcomponents.OBUF
     port map (
      I => o_we_OBUF,
      O => o_we
    );
\o_we__0_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"001D"
    )
        port map (
      I0 => current_state(0),
      I1 => current_state(2),
      I2 => current_state(1),
      I3 => i_rst_IBUF,
      O => \o_we__0_i_1_n_0\
    );
\o_we__0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => current_state(2),
      I1 => current_state(0),
      O => \o_we__0_i_2_n_0\
    );
o_we_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => o_en_i_1_n_0,
      D => '0',
      Q => o_we_OBUF,
      R => '0'
    );
\o_we_reg__0\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => i_clk_IBUF_BUFG,
      CE => \o_we__0_i_1_n_0\,
      D => \o_we__0_i_2_n_0\,
      Q => o_we_OBUF,
      R => '0'
    );
end STRUCTURE;
