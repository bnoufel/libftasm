section .text
	global	_ft_isprint

quit:
	mov		rax, 0
	ret

_ft_isprint:
	cmp		rdi, 32
	jl		quit
	cmp		rdi, 127
	jge		quit
	mov		rax, 1
	ret
