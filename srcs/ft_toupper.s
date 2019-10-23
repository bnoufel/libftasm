section .text
	global	_ft_toupper

quit:
	lea		rax, [rdi]
	ret

_ft_toupper:
	lea		rax, [rdi - 97]
	cmp		rax, 26
	jae		quit
	lea		rax, [rdi - 32]
	ret
