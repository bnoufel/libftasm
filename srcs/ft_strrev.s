section .text
	global	_ft_strrev
	extern	_ft_memrev
	extern	_ft_strlen

_ft_strrev:
	call	_ft_strlen
	mov		rsi, rax
	call	_ft_memrev
	ret