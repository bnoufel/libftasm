section .data
	error_malloc db "malloc fail", 0

section .text
	global	_ft_memalloc
	extern	_ft_putendl
	extern	_ft_memset
	extern	_malloc
	align	16

malloc_fail:
	lea		rdi, [rel error_malloc]
	call	_ft_putendl
	xor		rax, rax
	ret

_ft_memalloc:
	mov		r12, rdi
	call	_malloc
	test	rax, rax
	je		malloc_fail
	mov		rdi, rax
	mov		rsi, 0
	mov		rdx, r12
	call	_ft_memset
	ret
