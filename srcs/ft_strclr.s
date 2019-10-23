section .text
	global	_ft_strclr
	extern	_ft_memclr
	extern	_ft_strlen

_ft_strclr:
	call	_ft_strlen
	mov		rsi, rax
	call	_ft_memclr
	ret
