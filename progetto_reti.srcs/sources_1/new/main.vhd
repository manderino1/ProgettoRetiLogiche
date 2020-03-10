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
-- library UNISIM;
-- use UNISIM.VComponents.all;

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
    type STATE_TYPE is (wait_addr, read_addr, process_addr, wait_for_start, write_addr, set_done, read_wb0, wait_for_done, 
        store_wb0_load_wb1, store_wb1_load_wb2, store_wb2_load_wb3, 
        store_wb3_load_wb4, store_wb4_load_wb5, store_wb5_load_wb6, store_wb6_load_wb7, store_wb7);  -- Define here the list of the states
    
	signal current_state, next_state : STATE_TYPE := read_wb0;    -- Signal that contains the current state
	
	type WB_ADDR_ARRAY is array (7 downto 0) of STD_LOGIC_VECTOR(7 downto 0);
	signal wb_addresses : WB_ADDR_ARRAY;
	signal wb_addresses_next : WB_ADDR_ARRAY;
   
    signal wz_data, wz_data_next : STD_LOGIC_VECTOR(7 downto 0);
begin

    reset: process(i_clk, i_rst)
    begin
        if i_rst = '1' then
            -- Reset all the port and signals to default state
            current_state <= read_wb0; -- Start loading of wb addresses
        elsif rising_edge(i_clk) then
            current_state <= next_state;
            for i in 0 to 7 loop
                wb_addresses(i) <= wb_addresses_next(i);
            end loop;
              
            wz_data <= wz_data_next;
        end if;
    end process;
    
    lambda: process(current_state, i_start, i_data, wb_addresses, wz_data)
    variable found : STD_LOGIC;
    variable one_hot : STD_LOGIC_VECTOR(3 downto 0);
    variable sub : NATURAL;
    begin
        next_state <= current_state;
        wz_data_next <= wz_data;
        for i in 0 to 7 loop
            wb_addresses_next(i) <= wb_addresses(i);
        end loop;
        case current_state is
            when read_wb0 =>
                next_state <= store_wb0_load_wb1;
            when store_wb0_load_wb1 =>
                wb_addresses_next(0) <= i_data;
                next_state <= store_wb1_load_wb2;
            when store_wb1_load_wb2 =>
                wb_addresses_next(1) <= i_data;
                next_state <= store_wb2_load_wb3;
            when store_wb2_load_wb3 =>
                wb_addresses_next(2) <= i_data;
                next_state <= store_wb3_load_wb4;
            when store_wb3_load_wb4 =>
                wb_addresses_next(3) <= i_data;
                next_state <= store_wb4_load_wb5;
            when store_wb4_load_wb5 =>
                wb_addresses_next(4) <= i_data;
                next_state <= store_wb5_load_wb6;
            when store_wb5_load_wb6 =>
                wb_addresses_next(5) <= i_data;
                next_state <= store_wb6_load_wb7;
            when store_wb6_load_wb7 =>
                wb_addresses_next(6) <= i_data;
                next_state <= store_wb7;
            when store_wb7 =>
                wb_addresses_next(7) <= i_data;
                if i_start = '1' then
                    next_state <= read_addr;
                else
                    next_state <= wait_for_start;
                end if;
            when read_addr =>
                next_state <= wait_addr;
            when wait_addr =>
                next_state <= process_addr;
            when process_addr =>
                -- Here we check if in wz and then publish the output
                found := '0';
                for i in 0 to 7 loop
                    sub := to_integer(UNSIGNED(i_data) - UNSIGNED(wb_addresses(i)));
                    if sub < 4 then
                        one_hot := (others => '0');
                        one_hot(sub) := '1';
                        wz_data_next <= '1' & STD_LOGIC_VECTOR(to_unsigned(i,3)) & one_hot;
                        found := '1';
                        exit;
                    end if;
                end loop;
                if found = '0' then
                    wz_data_next <= '0' & i_data(6 downto 0);
                end if;
                -- OUT
                next_state <= write_addr;
            when write_addr =>
                next_state <= set_done;
            when set_done =>
                next_state <= wait_for_done;
            when wait_for_done =>
                if i_start = '0' then
                    next_state <= wait_for_start;
                end if;
            when wait_for_start =>
                if i_start = '1' then
                    next_state <= read_addr;
                end if;
        end case;
    end process;
    
    delta: process(current_state, wz_data)
    begin
        o_data <= wz_data;
        o_en <= '0';
        o_we <= '0';
        o_done <= '0';
        case current_state is
            when read_wb0 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000000";
            when store_wb0_load_wb1 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000001";
            when store_wb1_load_wb2 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000010";
            when store_wb2_load_wb3 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000011";
            when store_wb3_load_wb4 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000100";
            when store_wb4_load_wb5 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000101";
            when store_wb5_load_wb6 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000110";
            when store_wb6_load_wb7 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000000111";
            when store_wb7 =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000001000";
            when read_addr =>
                o_en <= '1';
                o_we <= '0';
                o_address <= "0000000000001000";
            when wait_addr =>
                o_en <= '0';
                o_we <= '0';
                o_address <= "0000000000001000";
            when process_addr =>
                o_en <= '0';
                o_we <= '0';
                o_address <= "0000000000001000";
            when write_addr =>
                o_en <= '1';
                o_address <= "0000000000001001";
                o_we <= '1';
            when set_done =>
                o_en <= '0';
                o_we <= '0';
                o_done <= '1';
                o_address <= "0000000000001001";
            when wait_for_done =>
                o_en <= '0';
                o_we <= '0';
                o_address <= "0000000000001000";
            when wait_for_start =>
                o_en <= '0';
                o_we <= '0';
                o_address <= "0000000000001000";
        end case;
    end process;
end Behavioral;