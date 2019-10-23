section .data
	null db	"(null)", 0

section .text
	global	_ft_puts
	extern	_ft_strlen
	extern	_ft_putstr
	extern	_ft_putendl

quit:
	lea		rdi, [rel null]
    xor		r13, r13
	call	_ft_putendl
	mov		rax, 10
	ret

_ft_puts:
	mov		r13, rdi
	cmp		r13, 0
	je		quit
	call	_ft_putendl
    mov		rax, 10
    xor		r13, r13
	ret
