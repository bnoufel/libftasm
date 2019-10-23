section .text
	global	_ft_islower

quit:
	mov		rax, 0
	ret

_ft_islower:
	lea		rax, [rdi - 97]
	cmp		rax, 26
	jae		quit
	mov		rax, 1
	ret
