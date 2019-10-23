section .text
	global	_ft_isupper

quit:
	mov		rax, 0
	ret

_ft_isupper:
	lea		rax, [rdi - 65]
	cmp		rax, 26
	jae		quit
	mov		rax, 1
	ret
