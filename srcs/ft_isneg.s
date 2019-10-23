section .text
	global	_ft_isneg

is_neg:
	mov		rax, 1
	ret

_ft_isneg:
	cmp		rdi, 0
	ja		is_neg
	mov		rax, 0
	ret
