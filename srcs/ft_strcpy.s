section .text
	global	_ft_strcpy
	extern	_ft_memcpy
	extern	_ft_strlen

quit:
	pop		rax
	ret

_ft_strcpy:
	push	rdi
	cmp		rdi, 0
	je		quit
	cmp		rsi, 0
	je		quit
	mov		rdi, rsi
	call	_ft_strlen
	pop		rdi
	mov		rdx, rax
	mov		byte [rdi + rdx], 0
	call	_ft_memcpy
	ret
