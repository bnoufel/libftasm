section .data
	error_malloc db "malloc fail", 0

section .text
	global	_ft_strjoin
	extern	_ft_strlen
	extern	_ft_memcpy
	extern	_ft_strcat
	extern	_ft_putendl
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

_ft_strjoin:
	cmp		rdi, 0
	je		quit
	cmp		rsi, 0
	je		quit
	; save register
	mov		r13, rsi
	mov		r12, rdi

len_s1:
	; len s1
	call	_ft_strlen
	mov		r14, rax
	push	rax

len_s2:
	; len s2
	mov		rdi, r13
	call	_ft_strlen
	mov		rdi, rax
	add		rdi, r14
	mov		r15, rdi

alloc_str:
	; malloc
	call	_malloc
	; protect malloc
	test	rax, rax
	jz		malloc_fail

cpy_s1:
	; memcpy
	mov		rdi, rax
	mov		rsi, r12
	pop		rdx
	call	_ft_memcpy
	mov		byte [rax + rdx], 0

cat_s1_s2:
	; strcat
	mov		rdi, rax
	mov		rsi, r13
	call	_ft_strcat
	mov		byte [rax + r15], 0
	xor		r12, r12
	xor		r13, r13
	xor		r15, r15
	ret
