library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
-- Mux 2x1 de 32 bits (ALUSrc e MemToReg)
entity mux2x1 is
    Port ( inputA : in  STD_LOGIC_VECTOR (31 downto 0);
           inputB : in  STD_LOGIC_VECTOR (31 downto 0);
           sel    : in  STD_LOGIC;
           output : out STD_LOGIC_VECTOR (31 downto 0));
end mux2x1;

architecture Behavioral of mux2x1 is
begin
	output <= inputB when sel='1' else inputA;
end Behavioral;
