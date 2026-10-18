library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity controle is
    Port ( OPcode : in  STD_LOGIC_VECTOR (5 downto 0);
           ALUOp : out  STD_LOGIC_VECTOR (1 downto 0);
           RegDst : out  STD_LOGIC;
           ALUSrc : out  STD_LOGIC;
           MemToReg : out  STD_LOGIC;
           RegWrite : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
			  Branch : out  STD_LOGIC;
			  Jump : out STD_LOGIC;
			  BranchNE : out std_logic
			  );
end controle;

architecture Behavioral of controle is
	SIGNAL R_type, LWD, SWD, BEQ, ADDI, BNE, J: std_logic;

begin

	R_type <= '1' when OPcode = "000000" else '0';
	LWD <= '1' when OPcode = "100011" else '0';
	SWD <= '1' when OPcode = "101011" else '0';
	BEQ <= '1' when  OPcode = "000100" else '0';
	BNE <= '1' when OPcode = "000101" else '0';
	Jump <= '1' when OPcode = "000010" else '0';
	ADDI <= '1' when OPcode = "001000" else '0';
	
	Branch <= BEQ;
	MemToReg <= LWD;
	ALUSrc <= LWD Or SWD or ADDI;
	RegDst <= R_type;
	MemRead <= LWD;
	MemWrite <= SWD;
	RegWrite <= R_type Or LWD or ADDI;
	
	
	ALUOp(1) <= R_type;
	ALUOp(0) <= BEQ or BNE;
	BranchNE <= BNE;
end Behavioral;

