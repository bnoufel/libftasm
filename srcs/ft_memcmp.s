section .text
	global	_ft_memcmp

.rdi_null:
	cmp		rsi, 0
	je		.return_zero
	jmp		.return_neg

.return_pos:
	mov		rax, 1
	ret

.return_neg:
	mov		rax, -1
	ret

.return_zero:
	mov		rax, 0
	ret

_ft_memcmp:
	cmp		rdx, 0
	je		.return_zero
	cmp		rdi, 0
	je		.rdi_null 
	cmp		rsi, 0
	je		.return_pos
	push	rdi
	push	rsi
	mov		rcx, rdx
	repe	cmpsb
	mov		dh, [rdi - 1]
	mov		dl, [rsi - 1]
	pop		rsi
	pop		rdi
	cmp		dh, dl
	je		.return_zero
	jg		.return_pos
	jl		.return_neg
