section .text
	global	_ft_memrev

quit:
	pop		rdi
	mov		rax, rdi
	ret

_ft_memrev:
	push	rdi
	cmp		rdi, 0    
	je		quit    
	mov		rdx, rdi
	add		rdx, rsi
	dec		rdx
.looop:
	cmp		rdi, rdx
	jge		quit
	mov		cl, byte[rdi]
	mov		ch, byte[rdx]
	mov		byte[rdi], ch
	mov		byte[rdx], cl
	inc		rdi
	dec		rdx
	jmp		.looop
