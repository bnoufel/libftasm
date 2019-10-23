section .text
	global	_ft_strsub
	extern	_ft_strlen
	extern	_malloc
	extern	_ft_strncpy
	extern	_ft_putendl
	align	16

quit:
	mov		rax, 0
	ret

_ft_strsub:
	cmp		rdi, 0
	je		quit
	push	rdi
	push	rsi
	push	rdx
	mov		r12, rdi ; str
	mov		rdi, rdx
	call	_malloc
	mov		rdi, rax
	pop		rdx
	pop		rsi
	add		r12, rsi
	mov		rsi, r12
	call	_ft_strncpy
	pop		rdi
	ret
