section .text
	global	_ft_putstr_fd
	extern	_ft_strlen

_ft_putstr_fd:
	mov 	r13, rdi
	mov 	r12, rsi
	call	_ft_strlen
	mov 	r11, rax
	mov 	rax, 0x2000004
	mov 	rdi, r12
	mov 	rsi, r13
	mov 	rdx, r11
	syscall
	mov		rdi, r13
	mov		rsi, r12
    xor 	r13, r13
    xor 	r12, r12
	ret
