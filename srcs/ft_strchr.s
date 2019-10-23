section .text
    global	_ft_strchr
    extern	_ft_strlen
    extern	_ft_memchr

_ft_strchr:
    call	_ft_strlen
    mov		rdx, rax
    inc		rdx
    call	_ft_memchr
    ret
