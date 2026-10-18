.data 
    newline: .asciiz "\n"

.text
    .globl main

main:
    li $s0, 0            
    li $s1, 1            
    li $s2, 0            
    li $s3, 20           # s3 sendo usado como limite para s2
    
    loop:
        beq $s2, $s3, fim        
        
        
        move $a0, $s1            
        li $v0, 1                
        syscall    
               
        la $a0, newline          
        li $v0, 4                
        syscall
                
        add $t0, $s0, $s1        
                
        move $s0, $s1          
        move $s1, $t0            
        
        addi $s2, $s2, 1
        j loop
    	
    fim:
        li $v0, 10       
        syscall