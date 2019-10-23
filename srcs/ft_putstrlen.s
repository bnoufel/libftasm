section .text
	global	_ft_putstrlen

_ft_putstrlen:
	mov		rax, 0x2000004
	mov		r12, rdi
	mov		r13, rsi
	mov		rdi, 1
	mov		rsi, r12
	mov		rdx, r13
	syscall
	xor		r12, r12
	xor		r13, r13
	ret
