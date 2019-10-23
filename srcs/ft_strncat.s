section .text
	global	_ft_strncat
	extern	_ft_strlen
	extern	_ft_strncpy

_ft_strncat:
	push	rdi
	call	_ft_strlen
	add		rdi, rax
	call	_ft_strncpy
	pop		rax
	ret
