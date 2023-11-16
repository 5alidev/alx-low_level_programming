section .data
	hello_message db "Hello, Holberton",10,0

section .text
	extern printf
	global _start

_start:
	mov rdi, hello_message
	call printf

	mov rax, 60
	xor rdi, rdi
	syscall
