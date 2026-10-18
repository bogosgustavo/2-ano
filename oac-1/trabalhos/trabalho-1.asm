.data
x: .word 0, 1, 12, 3, 5, 8, 15, 2, 1
maior: .word 0

.text
.globl main
main:
    la $s0, x          # endereço do vetor
    la $s1, maior      # endereço da variável maior

    lw $t0, 0($s0)     # maior = x[0]
    addi $t1, $zero, 0 # i = 0

L1:
    slti $t2, $t1, 9   
    beq $t2, $zero, fim

    sll $t3, $t1, 2    # t3 = i * (2^2)
    add $t3, $t3, $s0  # endereço de x[i]

    lw $t4, 0($t3)     # t4 = x[i]

    slt $t5, $t0, $t4  # se maior < x[i]
    beq $t5, $zero, continua

    add $t0, $t4, $zero  # maior = x[i]

continua:
    addi $t1, $t1, 1   # i++
    j L1

fim:
    sw $t0, 0($s1)     # salva maior
