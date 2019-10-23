section .text
	global	_ft_strlcat
	extern	_ft_strlen
	extern	_ft_strncat

quit_wtf:
	add		rdx, r15
	mov		rax, rdx
	ret

_ft_strlcat:
	mov		r12, rdi ; save rdi
	mov		r13, rsi ; save rsi
	call	_ft_strlen ; call strlen for (dst)
	mov		r14, rax ; len of dst
	mov		rdi, rsi ; mov  src to rdi
	call	_ft_strlen  ; call strlen for (src)
	mov		r15, rax ; len of src
	cmp		rdx, r14
	jle		quit_wtf ; quit i don't know why this ret
	mov		rdi, r12 ; re pop rdi (dst)
	mov		rsi, r13 ; re pop rsi (src)
	sub		rdx, r14 ; calc size to cpy
	dec		rdx ; calc size to cpy
	call	_ft_strncat 
	add		r14, r15 ; add 2 size
	mov		rax, r14 ; mov to rax to ret
	xor		r12, r13
	xor		r13, r13
	xor		r14, r14
	xor		r15, r15
	ret
