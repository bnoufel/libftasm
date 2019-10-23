section .text
	global	_ft_strncpy

_ft_strncpy:
	mov		r12, rdi
	mov		r13, rsi
	mov		r9, 0

loop:
	cmp		rdx, r9
	je		ret
	mov		al, [rsi]
	mov		[rdi], al
	inc		rdi
	inc		rsi
	inc		r9
	cmp		al, 0
	jne		loop

ret:
	mov		byte [rdi + r9], 0 
	mov		rax, r12
	xor		r12, r12
	xor		r13, r13
	ret
