section .text
	global	_ft_memcpy

quit:
	pop		rax
	ret

_ft_memcpy:
	push	rdi
	cmp		rdi, 0
	je		quit
	cmp		rsi, 0
	je		quit
	cmp		rdx, 0
	je		quit	
	mov		rcx, rdx
	rep		movsb
	pop		rax
	ret
