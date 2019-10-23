section .text
	global	_ft_tolower

quit:
	lea		rax, [rdi]
	ret

_ft_tolower:
	lea		rax, [rdi - 65]
	cmp		rax, 26
	jae		quit
	lea		rax, [rdi + 32]
	ret
