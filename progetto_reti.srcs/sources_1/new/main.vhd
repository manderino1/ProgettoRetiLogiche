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
    type STATE_TYPE IS (read_wb0, store_wb0_load_wb1, store_wb1_load_wb2, store_wb2_load_wb3, 
        store_wb3_load_wb4, store_wb4_load_wb5, store_wb5_load_wb6, store_wb6_load_wb7, store_wb7, wait_wb,
        read_addr, wait_addr, process_addr, wait_for_start, write_addr, set_done, wait_for_done);  -- Define here the list of the states
	signal current_state : STATE_TYPE := read_wb0;    -- Signal that contains the current state
	signal wb_load_done : STD_LOGIC := '0';
	signal wb_addr_0 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_1 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_2 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_3 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_4 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_5 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_6 : STD_LOGIC_VECTOR(6 downto 0);
	signal wb_addr_7 : STD_LOGIC_VECTOR(6 downto 0);							      
begin
    process(i_clk, i_rst)
    begin
        if i_rst = '1' then
            -- Reset all the port and signals to default state
            current_state <= read_wb0; -- Start loading of wb addresses
            o_done <= '0';
            o_en <= '0';
            wb_load_done <= '0'; -- SERVE?
        elsif rising_edge(i_clk) then
            -- Defining all the state machine into this case
            -- Remember to cover all the case and assign the signal to the signal_next value
            case current_state is
                when read_wb0 =>
                    -- Insert what happens if current_state is load_wb1, and so on
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000000";
                    current_state <= wait_wb;
                when wait_wb =>
                    -- Insert what happens if current_state is load_wb1, and so on
                    o_address <= "0000000000000001";
                    current_state <= store_wb0_load_wb1;    
                when store_wb0_load_wb1 =>
                    wb_addr_0 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000010";
                    current_state <= store_wb1_load_wb2;
                when store_wb1_load_wb2 =>
                    wb_addr_1 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000011";
                    current_state <= store_wb2_load_wb3;
                when store_wb2_load_wb3 =>
                    wb_addr_2 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000100";
                    current_state <= store_wb3_load_wb4;
                when store_wb3_load_wb4 =>
                    wb_addr_3 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000101";
                    current_state <= store_wb4_load_wb5;
                when store_wb4_load_wb5 =>
                    wb_addr_4 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000110";
                    current_state <= store_wb5_load_wb6;
                when store_wb5_load_wb6 =>
                    wb_addr_5 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000000111";
                    current_state <= store_wb6_load_wb7;
                when store_wb6_load_wb7 =>
                    wb_addr_6 <= i_data(6 downto 0);
                    o_en <= '1';
                    o_we <= '0';
                    current_state <= store_wb7;
                when store_wb7 =>
                    wb_addr_7 <= i_data(6 downto 0);
                    o_en <= '0';
                    o_we <= '0';
                    if i_start = '1' then
                        current_state <= read_addr;
                    else
                        current_state <= wait_for_start;
                    end if;
                when read_addr =>
                    o_en <= '1';
                    o_we <= '0';
                    o_address <= "0000000000001000";
                    current_state <= wait_addr;
                when wait_addr =>
                    current_state <= process_addr;
                when process_addr =>
                    -- Here we check if in wz and then publish the output
                    -- PUT HERE ALL THE PROCESSING PART
                    if i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_0)) then
                        o_data <= '1' & "000" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_0)+1) then
                        o_data <= '1' & "000" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_0)+2) then
                        o_data <= '1' & "000" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_0)+3) then
                        o_data <= '1' & "000" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_1)) then
                        o_data <= '1' & "001" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_1)+1) then
                        o_data <= '1' & "001" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_1)+2) then
                        o_data <= '1' & "001" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_1)+3) then
                        o_data <= '1' & "001" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_2)) then
                        o_data <= '1' & "010" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_2)+1) then
                        o_data <= '1' & "010" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_2)+2) then
                        o_data <= '1' & "010" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_2)+3) then
                        o_data <= '1' & "010" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_3)) then
                        o_data <= '1' & "011" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_3)+1) then
                        o_data <= '1' & "011" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_3)+2) then
                        o_data <= '1' & "011" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_3)+3) then
                        o_data <= '1' & "011" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_4)) then
                        o_data <= '1' & "100" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_4)+1) then
                        o_data <= '1' & "100" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_4)+2) then
                        o_data <= '1' & "100" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_4)+3) then
                        o_data <= '1' & "100" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_5)) then
                        o_data <= '1' & "101" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_5)+1) then
                        o_data <= '1' & "101" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_5)+2) then
                        o_data <= '1' & "101" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_5)+3) then
                        o_data <= '1' & "101" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_6)) then
                        o_data <= '1' & "110" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_6)+1) then
                        o_data <= '1' & "110" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_6)+2) then
                        o_data <= '1' & "110" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_6)+3) then
                        o_data <= '1' & "110" & "1000";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_7)) then
                        o_data <= '1' & "111" & "0001";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_7)+1) then
                        o_data <= '1' & "111" & "0010";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_7)+2) then
                        o_data <= '1' & "111" & "0100";
                    elsif i_data(6 downto 0) = std_logic_vector(UNSIGNED(wb_addr_7)+3) then
                        o_data <= '1' & "111" & "1000";
                    else
                        o_data <= '0' & i_data(6 downto 0);
                    end if;
                    o_en <= '1';
                    o_we <= '0';
                    current_state <= write_addr;
                when wait_for_start =>    
                    if i_start = '0' then
                        o_done <= '0';
                    end if;
                    if i_start = '1' then
                        current_state <= read_addr;
                    end if;
                when write_addr =>
                    o_we <= '1';
                    o_address <= "0000000000001001";
                    current_state <= set_done;
                when set_done =>
                    o_en <= '0';
                    o_we <= '0';
                    o_done <= '1';
                    current_state <= wait_for_done;
                when wait_for_done =>
                    current_state <= wait_for_start;
            end case;
            
            -- Setting all registers to the next value
        end if;
    end process;
    -- Here we can for example set up o_en to 1 if we are in the done state
end Behavioral;