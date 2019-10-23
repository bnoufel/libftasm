section .text
	global	_ft_strdel
	extern	_ft_strlen
	extern	_ft_memdel

_ft_strdel:
	push	rdi
	mov		rsi, rdi
	call	_ft_strlen
	mov		rsi, rax
	pop		rdi
	call	_ft_memdel
	ret
