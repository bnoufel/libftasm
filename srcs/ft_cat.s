section .data
	error db "read error :o", 10, 0
section .bss
	content resb 255,

section .text
	global	_ft_cat
	extern	_ft_putstr
	extern	_ft_strlen
	extern	_ft_bzero
quit:
	xor		rax, rax
	ret

put_error:
	lea		rdi, [rel error]
	call	_ft_putstr
	call	quit

_ft_cat:
	mov		r12, rdi
	mov		rax, 0x2000003 ; read
	mov		rdi, r12
	lea		rsi, [rel content]
	mov		rdx, 255
	syscall
	mov		r13, rax
	jc		quit
	cmp		rax, 0
	je		quit
	mov		rax, 0x2000004; write
	mov		rdi, 1
	lea		rsi, [rel content]
	mov		rdx, r13
	syscall
	mov		rdi, r12
	jmp		_ft_cat
	ret
	