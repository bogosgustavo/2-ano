.data 
    newline:  .asciiz "\n"
    msg_phi:  .asciiz " -> Phi = "   

.text
    .globl main

main:
   
    li $s0, 0           
    li $s1, 1            
    li $s2, 0           
    li $s3, 20           

    loop:
        beq $s2, $s3, fim        
        
        move $a0, $s1            
        li $v0, 1                
        syscall    
      
        la $a0, msg_phi          
        li $v0, 4               
        syscall

        mtc1 $s0, $f0                #mtc é move to coprocessor, $f0 seria float
        cvt.s.w $f0, $f0            #cvt.s.w é convert word to single, ambos comandos trabalham com ponto flutuante (float), converte float para decimal  

        mtc1 $s1, $f12          
        cvt.s.w $f12, $f12       

        div.s $f12, $f12, $f0    

        li $v0, 2                
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