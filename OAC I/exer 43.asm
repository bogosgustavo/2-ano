.data
	v: .word 0,1,2,3,4,5,6
	alfa: .word 32
.text
.globl main
main:
	la $t0, v
	lw $t1, alfa
	# por v ser em byte, cada endereço tem 4 bytes, logo v1 é 4 v3 é 12 etc
	sw $t1, 4($t0)    # v[1]
    	sw $t1, 12($t0)   # v[3]
   	sw $t1, 20($t0)   # v[5]