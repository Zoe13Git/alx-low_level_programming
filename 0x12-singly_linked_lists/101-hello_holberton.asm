	global main
	extern printf

	section .text
main:
	mov	rdi, message
	mov 	eax, 0
	call 	printf
	
	mov 	eax, 0
	ret

message:
	db 	"Hello, Holberton", 10, 0
