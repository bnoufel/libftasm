section .text
    global	_ft_strnchr
    extern	_ft_strlen
    extern	_ft_memchr

_ft_strnchr:
	call	_ft_strlen
	cmp		rax, rdx
	jge		.compare
	mov		rdx, rax
	inc		rdx

.compare:
    call	_ft_memchr
    ret
