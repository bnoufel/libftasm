section	.bss
	tmp resb 134217727,

section .text
	global	_ft_memmove
	extern	_ft_memcpy

quit:
	xor		rax, rax
	ret

_ft_memmove:
	cmp		rdx, 134217727
	jge		quit
	push	rsi
	push	rdi
	lea 	rdi, [rel tmp]
	call	_ft_memcpy
	pop		rdi
	mov 	rsi, rax
	call	_ft_memcpy
	pop		rsi
	ret
