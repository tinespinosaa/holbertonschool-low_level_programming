section .text
	global main
section .data
	msg db 'Hello, World',0xa
	len equ $ - msg

section .text

main:

	mov edx,len
mov ecx,msg
mov ebx,1
mov eax,4
int 0x80

mov ebx,0
mov eax,1
int 0x80
