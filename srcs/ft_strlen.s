section .text
	global	_ft_strlen

quit:
	mov		rax, 0
	ret

_ft_strlen:
	cmp		rdi, 0
	je		quit
	push	rcx
	mov		r9, rdi
	xor		al, al
	mov		rcx, 0xffffffff
	repne	scasb
	sub		rdi, r9
	dec		rdi
	mov		rax, rdi
	pop		rcx
	mov		rdi, r9
	ret
