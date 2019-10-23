section .text
    global	_ft_memrchr

null:
	mov     rax, 0

end:
	ret

_ft_memrchr:
	cmp		rdi, 0
	je		null
	cmp		rdx, 0
	je		null
	mov		rax, rdi
	add		rax, rdx
	dec		rax

.loop:
	cmp		byte[rax], sil
	je		end
	cmp		rax, rdi
	jle		null
	dec		rax
	jmp		.loop
