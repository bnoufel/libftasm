section .text
	global	_ft_putstr
	extern	_ft_strlen

_ft_putstr:
	mov		r13, rdi
	call	_ft_strlen
	mov		r12, rax
	mov		rax, 0x2000004
	mov		rdi, 1
	mov		rsi, r13
	mov		rdx, r12
	syscall
    xor		r13, r13
	ret
