section .text
	global	_ft_memset

quit:
	pop		rdi
	mov		rax, 0
	ret

_ft_memset:
	push	rdi
	cmp		rdi, 0
	je		quit
	mov		rax, rdi
	mov		rcx, rdx
	cld
	mov		rax, rsi
	rep		stosb
	pop		rax
	ret
