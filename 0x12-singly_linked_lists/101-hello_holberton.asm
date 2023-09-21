SECTION .text

	extern printf
	global main

main:
	mov esi, db "Hello, Holberton", 0
	mov edi, db "%s", 10, 0
	mov eax, 0
	call printf

	mov eax, 0
	ret
