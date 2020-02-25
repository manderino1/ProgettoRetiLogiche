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
--use IEEE.NUMERIC_STD.ALL;

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
    type STATE_TYPE IS (read_wb0, store_wb0_load_wb1, store_wb1_load_wb2, store_wb2_load_wb3, 
        store_wb3_load_wb4, store_wb4_load_wb5, store_wb5_load_wb6, store_wb6_load_wb7, store_wb7, wait_reading);  -- Define here the list of the states
	signal current_state : STATE_TYPE := read_wb0;    -- Signal that contains the current state
	signal wb_load_done : STD_LOGIC := '0';
	signal wb_addr_0, wb_addr_0_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_1, wb_addr_1_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_2, wb_addr_2_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_3, wb_addr_3_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_4, wb_addr_4_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_5, wb_addr_5_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_6, wb_addr_6_next : STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addr_7, wb_addr_7_next : STD_LOGIC_VECTOR(7 downto 0);							      
begin
    process(i_clk, i_rst)
    begin
        if i_rst = '1' then
            -- Reset all the port and signals to default state
            current_state <= read_wb0; -- TESTING ONLY, LOADING WB ADDRESSES ON START
            o_en <= '0';
        elsif rising_edge(i_clk) then
            -- Defining all the state machine into this case
            -- Remember to cover all the case and assign the signal to the signal_next value
            case current_state is
                when read_wb0 =>
                    -- Insert what happens if current_state is load_wb1, and so on
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000000";
                    current_state <= wait_reading;
                when wait_reading =>
                    -- Insert what happens if current_state is load_wb1, and so on
                    o_address <= "0000000000000001";
                    current_state <= store_wb0_load_wb1;    
                when store_wb0_load_wb1 =>
                    wb_addr_0_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000010";
                    current_state <= store_wb1_load_wb2;
                when store_wb1_load_wb2 =>
                    wb_addr_1_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000011";
                    current_state <= store_wb2_load_wb3;
                when store_wb2_load_wb3 =>
                    wb_addr_2_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000100";
                    current_state <= store_wb3_load_wb4;
                when store_wb3_load_wb4 =>
                    wb_addr_3_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000101";
                    current_state <= store_wb4_load_wb5;
                when store_wb4_load_wb5 =>
                    wb_addr_4_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000110";
                    current_state <= store_wb5_load_wb6;
                when store_wb5_load_wb6 =>
                    wb_addr_5_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000111";
                    current_state <= store_wb6_load_wb7;
                when store_wb6_load_wb7 =>
                    wb_addr_6_next <= i_data;
                    o_en <= '1';
                    o_we <= '0';
                    current_state <= store_wb7;
                when store_wb7 =>
                    wb_addr_7_next <= i_data;
                    o_en <= '0';
                    o_we <= '0';
                    wb_load_done <= '1';
            end case;
            
            -- Setting all registers to the next value
            wb_addr_0 <= wb_addr_0_next;
            wb_addr_1 <= wb_addr_1_next;
            wb_addr_2 <= wb_addr_2_next;
            wb_addr_3 <= wb_addr_3_next;
            wb_addr_4 <= wb_addr_4_next;
            wb_addr_5 <= wb_addr_5_next;
            wb_addr_6 <= wb_addr_6_next;
            wb_addr_7 <= wb_addr_7_next;
        end if;
    end process;
    
    -- Here we can for example set up o_en to 1 if we are in the done state
end Behavioral;
