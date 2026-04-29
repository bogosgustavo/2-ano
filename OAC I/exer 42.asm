.data
	x:.word 15
	y: .byte 5
	z: .word 0
.text
.globl main

main: 
	lw $t1, x
	lb $t2, y
	
	sub $t0, $t1, $t2
	sw $t0, z