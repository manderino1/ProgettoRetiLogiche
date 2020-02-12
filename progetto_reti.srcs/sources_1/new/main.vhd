----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 11.02.2020 16:38:34
-- Design Name: 
-- Module Name: project_reti_logiche - Behavioral
-- Project Name: Progetto Reti Logiche
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity project_reti_logiche is
    Port ( i_clk : in STD_LOGIC;
           i_start : in STD_LOGIC;
           i_rst : in STD_LOGIC;
           i_data : in STD_LOGIC_VECTOR(7 downto 0);
           o_address : out STD_LOGIC_VECTOR(15 downto 0);
           o_done : out STD_LOGIC;
           o_en : out STD_LOGIC;
           o_we : out STD_LOGIC;
           o_data : out STD_LOGIC_VECTOR(7 downto 0));
end project_reti_logiche;

architecture Behavioral of project_reti_logiche is
signal wb0, wb1, wb2, wb3, wb4, wb5, wb6, wb7 : STD_LOGIC_VECTOR(7 downto 0);
signal wb0Init : STD_LOGIC := '0';
begin
    -- wb0 population
    process (i_clk, wb0Init)
    begin
        if rising_edge(i_clk) and wb0Init = '0' then
            o_en <= '1';
            o_we <= '0';
            o_address <= "0000000000000000";
            wb0 <= i_data;
        end if;
    end process;
    
    -- Processo di start
    process(i_start)
        variable addr : unsigned(7 downto 0);
        variable wbPresent : STD_LOGIC;
        variable wbBlock : STD_LOGIC_VECTOR(2 downto 0);
        variable wbOffset : STD_LOGIC_VECTOR(3 downto 0);
    begin
        if i_start = '0' then
            o_done <= '0';
        end if;
        if i_start = '1' then
            wbPresent := '0';
            o_en <= '1';
            o_we <= '0';
            -- Read the input
            o_address <= "0000000000001000";
            addr := unsigned(i_data);
            -- Check for word block in every input
            for i in 0 to 7 loop
                case i is
                    when 0 =>
                        o_address <= "0000000000000000";
                        wbBlock := "000";
                    when 1 =>
                        o_address <= "0000000000000001";
                        wbBlock := "001";
                    when 2 =>
                        o_address <= "0000000000000010";
                        wbBlock := "010";
                    when 3 =>
                        o_address <= "0000000000000011";
                        wbBlock := "011";
                    when 4 =>
                        o_address <= "0000000000000100";
                        wbBlock := "100";
                    when 5 =>
                        o_address <= "0000000000000101";
                        wbBlock := "101";
                    when 6 =>
                        o_address <= "0000000000000110";
                        wbBlock := "110";
                    when 7 =>
                        o_address <= "0000000000000111";
                        wbBlock := "111";
                end case;
                if unsigned(i_data) = addr then
                    -- Exists in a wb
                    wbPresent := '1';
                    wbOffset := "0001";
                    exit;
                end if;
                if unsigned(i_data) = addr+1 then
                    -- Exists in a wb
                    wbPresent := '1';
                    wbOffset := "0010";
                    exit;
                end if;
                if unsigned(i_data) = addr+2 then
                    -- Exists in a wb
                    wbPresent := '1';
                    wbOffset := "0100";
                    exit;
                end if;
                if unsigned(i_data) = addr+3 then
                    -- Exists in a wb
                    wbPresent := '1';
                    wbOffset := "1000";
                    exit;
                end if;
            end loop;
            if wbPresent = '0' then
                o_data <= '0' & STD_LOGIC_VECTOR(addr);
            else
                -- 1 + WZ in binario + Offset in one hot
                o_data <= '1' & wbBlock & wbOffset;
            end if;
            o_en <= '1';
            o_we <= '1';
            o_done <= '1';
        end if;           
    end process;
end Behavioral;
