section .data
	error_malloc db "malloc fail", 0

section .text
	global	_ft_strjoinfree
	extern	_ft_strjoin
	extern	_ft_putendl
	extern	_free
	align	16

free_s1:
	mov		rdi, r12
	call	_free
	ret

free_s2:
	mov		rdi, r13
	call	_free
	ret

free_all:
	call	free_s1
	call	free_s2
	ret

malloc_fail:
	lea		rdi, [rel error_malloc]
	call	_ft_putendl
	xor		rax, rax
	ret

quit:
	xor		rax, rax
	ret

_ft_strjoinfree:
	push	rdi
	push	rsi
	push	rdx
	call	_ft_strjoin
	pop		rdi
	pop		rsi
	pop		rdx
	cmp		rdx, 1
	je		free_s1
	cmp		rdx, 2
	je		free_s2
	cmp		rdx, 3
	je		free_all
	ret
