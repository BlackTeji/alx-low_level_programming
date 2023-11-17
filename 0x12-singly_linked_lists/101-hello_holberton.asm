;
;
; A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
; Uses the Printf function and complies with nasm and gcc
;
;

section .data
format db "%s", 10, 0
message db "Hello, Holberton", 0

section .text
extern printf ; C function to be called
global main ; main function

main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0 ;can be xor rax, rax
	call printf ; call C function.

	pop rbp ; restore RBP

	mov rax, 0 ;normal, no error, return value
	ret ; return
