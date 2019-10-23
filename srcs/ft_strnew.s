section .text
	global	_ft_strnew
	extern	_ft_memalloc

_ft_strnew:
	call	_ft_memalloc
	ret
