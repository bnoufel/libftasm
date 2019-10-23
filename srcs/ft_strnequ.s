section .text
	global	_ft_strnequ
	extern	_ft_strncmp

ret_true:
	mov rax, 1
	ret

_ft_strnequ:
	call	_ft_strncmp
	cmp		rax, 0
	je		ret_true
	mov		rax, 0
	ret
