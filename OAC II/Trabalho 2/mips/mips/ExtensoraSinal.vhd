library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

entity ExtensoraSinal is
    Port ( Input : in  STD_LOGIC_VECTOR (15 downto 0);
           Output : out  STD_LOGIC_VECTOR (31 downto 0));
end ExtensoraSinal;

architecture Behavioral of ExtensoraSinal is

begin
	
	Output <= std_logic_vector(resize(signed(Input), Output'length));

end Behavioral;

