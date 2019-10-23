section .text
	global	_ft_isdigit

quit:
	mov		rax, 0
	ret

_ft_isdigit:
	lea		rax, [rdi - 48]
	cmp		al, 10
	jae		quit
	mov		rax, 1
	ret
