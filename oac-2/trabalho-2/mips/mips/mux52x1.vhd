library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux52x1 is
    Port ( inputA : in  STD_LOGIC_VECTOR (4 downto 0);
           inputB : in  STD_LOGIC_VECTOR (4 downto 0);
           sel : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (4 downto 0));
end mux52x1;

architecture Behavioral of mux52x1 is

begin

	output <= inputB when sel='1' else
				 inputA;

end Behavioral;

