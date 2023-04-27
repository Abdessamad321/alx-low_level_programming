section .data
    hello: db 'Hello, Holberton', 0Ah
    hello_len: equ $-hello

section .text
    global main

main:
    mov eax, 1
    mov edi, 1
    mov esi, hello
    mov edx, hello_len
    syscall

    mov eax, 60
    xor edi, edi
    syscall

