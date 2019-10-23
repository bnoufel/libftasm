section .text
	global	_ft_isascii

quit:
	mov		rax, 0
	ret

_ft_isascii:
	lea		rax, [rdi]
	cmp		rax, 128
	jae		quit
	mov		rax, 1
	ret
