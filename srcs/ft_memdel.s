section .text
	global	_ft_memdel
	extern	_free

quit:
	mov		rax, 0
	ret

_ft_memdel:
	cmp		rdi, 0
	je		quit
	call	_free
	mov		rdi, 0
	ret
