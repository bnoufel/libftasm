section .text
	global	_ft_putendl_fd
	extern	_ft_putstr_fd
	extern	_ft_putchar_fd

_ft_putendl_fd:
	call	_ft_putstr_fd
	mov		rdi, 0xa
	call	_ft_putchar_fd
	ret
