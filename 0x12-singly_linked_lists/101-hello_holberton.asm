section .data
	hello_message db "Hello, Holberton", 0
	format db "%s\n", 0

section .text
	extern printf
	global main

main
	push qword format
	push qword hello_message
	call printf
	add rsp,16
	mov rdi, 0
	call exit

section .bss
	dummy resq 1
