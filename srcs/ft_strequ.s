section .text
	global	_ft_strequ
	extern	_ft_strcmp

ret_true:
	mov rax, 1
	ret

_ft_strequ:
	call	_ft_strcmp
	cmp		rax, 0
	je		ret_true
	mov		rax, 0
	ret
