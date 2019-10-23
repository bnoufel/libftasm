section .text
	global	_ft_bzero
	extern	_ft_memset

_ft_bzero:
	push	rsi
	mov		rdx, rsi
	mov		rsi, 0
	call	_ft_memset
	pop		rsi
	ret
