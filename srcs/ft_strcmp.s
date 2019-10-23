section .text
	global	_ft_strcmp
	extern	_ft_strlen
	extern	_ft_memcmp

_ft_strcmp:
	call	_ft_strlen
	inc		rax
	mov		rdx, rax
	call	_ft_memcmp
	ret