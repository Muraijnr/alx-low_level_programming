		section .data
	global main
	extern printf
	section .txt
hello: db "Hello, Holberton\n",10,0
format: db "%s",0

main:
	mov edi,format
	xor eax,eax
	call printf
	mov eax,0
	ret
