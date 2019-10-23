section .text
	global	_ft_memclr
	extern	_ft_strlen
	extern	_ft_bzero
	extern	_free

quit:
	mov		rax, 0
	ret

_ft_memclr:
	cmp		rdi, 0
	je		quit
	call	_free
	call	_ft_bzero
	ret
