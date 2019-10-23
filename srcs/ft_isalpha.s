section .text
	global	_ft_isalpha
	extern	_ft_islower

_ft_isalpha:
	lea		rax, [rdi - 65]
	cmp		rax, 26
	jae		_ft_islower
	mov		rax, 1
	ret
