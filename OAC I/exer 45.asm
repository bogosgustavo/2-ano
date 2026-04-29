.data  
	w: .word 0x01020304
	alfa: .byte 24
	x: .word 0, 1, 2, 3, 4
	beta: .byte 12
	w: .word 5, 6, 7, 8, 9

#a) 4 de w. 1 de alfa,
# 3 bytes de lixo ate alinhar,
# 20 bytes de x (5 words),
# 1 byte de beta,
# 3 bytes de lixo ate alinhar,
# 20 bytes do ultimo w,
# logo 4+1+3+20+1+3+20 = 52 bytes

#b) 3 antes de x e 3 antes do ultimo w, logo 6 bytes de lixo

#c) agrupar por tipo (.word juntos e .byte depois)
