section .text
	global	_ft_isalnum
	extern	_ft_isdigit
quit:
	mov		rax, 0
	ret

_ft_isupper:
	lea		rax, [rdi - 65]
	cmp		rax, 26
	jae		_ft_islower
	mov		rax, 1
	ret

_ft_islower:
    lea		rax, [rdi - 97]
    cmp		rax, 26
    jae		_ft_isdigit
    mov		rax, 1
    ret

_ft_isalnum:
	call	_ft_isupper
	ret
