section .text
	global	_ft_putstrlen_fd
	
_ft_putstrlen_fd:
	mov		rax, 0x2000004
	mov		r12, rdi
	mov		r13, rsi
	mov		rdi, r12
	mov		rsi, r13
	syscall
	xor		r12, r12
	xor		r13, r13
	ret
