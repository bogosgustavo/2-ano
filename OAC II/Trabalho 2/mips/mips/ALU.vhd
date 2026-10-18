library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_SIGNED.ALL;


entity ALU is
    Port ( A_input: in  STD_LOGIC_VECTOR (31 downto 0);
           B_input: in  STD_LOGIC_VECTOR (31 downto 0);
	   Zero : out  STD_LOGIC;
           ALU_Result : out  STD_LOGIC_VECTOR (31 downto 0);
	   ALUCtr : in std_logic_vector(2 downto 0));
		   
end ALU;

architecture Behavioral of ALU is

	SIGNAL ALU_output : STD_LOGIC_VECTOR (31 DOWNTO 0):= X"00000000";	
	

begin
		
	Zero <= '1' when (ALU_output = X"00000000") else '0';
	ALU_Result <= (X"0000000" & "000" & ALU_output(31)) when ALUCtr = "111" else ALU_output;
	
	process(ALUCtr, A_input, B_input)
	begin	
	
		case ALUCtr is
			when "000" => ALU_output <= A_input AND B_input;
			when "001" => ALU_output <= A_input OR B_input;
			when "010" => ALU_output <= A_input + B_input;
			when "110" => ALU_output <= A_input - B_input;
			when "111" => ALU_output <= A_input - B_input;
			when others => ALU_output <= X"00000000";
		end case;

	end process;

end Behavioral;

