library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ALUCtrl is
    Port ( ALUOp : in  STD_LOGIC_VECTOR (1 downto 0);
           Instr : in  STD_LOGIC_VECTOR (5 downto 0);
           ALUCtr : out  STD_LOGIC_VECTOR (2 downto 0));
end ALUCtrl;

architecture Behavioral of ALUCtrl is	
	
begin
	
	ALUCtr(2) <= ALUOp(0) OR (ALUOp(1) AND Instr(1));
	ALUCtr(1) <= (NOT ALUOp(1)) OR (NOT Instr(2));
	ALUCtr(0) <= (ALUOp(1) AND Instr(0)) OR (ALUOp(1) AND instr(3));

end Behavioral;

