section .data
	error_malloc db "malloc fail", 0

section .text
	global	_ft_strdup
	extern	_ft_putendl
	extern	_ft_memcpy
	extern	_ft_strlen
	extern	_malloc
	align	16

malloc_fail:
	lea		rdi, [rel error_malloc]
	call	_ft_putendl
	xor		rax, rax
	ret

quit:
	xor		rax, rax
	ret

_ft_strdup:
	cmp		rdi, 0
	je		quit
	mov		r12, rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	push	rax
	call	_malloc
	test	rax, rax
	jz		malloc_fail
	mov		rdi, rax
	mov		rsi, r12
	pop		rdx
	call	_ft_memcpy
	mov		rdi, r12
	xor		r12, r12
	ret
