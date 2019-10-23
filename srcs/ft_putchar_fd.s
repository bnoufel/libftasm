section .text
	global	_ft_putchar_fd

_ft_putchar_fd:
	push	rsi
	push	rdi
	mov		rax, 0x2000004
	mov		rdi, rsi
	mov		rsi, rsp
	mov		rdx, 1
	syscall
	pop		rdi
	pop		rsi
	ret
