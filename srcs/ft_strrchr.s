section .text
    global	_ft_strrchr
    extern	_ft_strlen
    extern	_ft_memrchr

_ft_strrchr:
	call	_ft_strlen
	mov		rdx, rax  
	inc		rdx
	call	_ft_memrchr
	ret
