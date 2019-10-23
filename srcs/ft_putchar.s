section .text
	global	_ft_putchar
	global	_main

_ft_putchar:
	push	rdi
	mov		rax, 0x2000004
	mov		rdi, 1
	mov		rsi, rsp
	mov		rdx, 1
	syscall
	pop		rdi
	ret
