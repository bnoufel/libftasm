section .text
	global	_ft_isspace

is_valid:
	mov		rax, 1
	ret

check:
	cmp		rax, 9
	jge		is_valid
	mov		rax, 0
	ret

_ft_isspace:
	lea		rax, [rdi]
	cmp		rax, 32
	je		is_valid
	cmp		rax, 13
	jle		check
	mov		rax, 0
	ret
