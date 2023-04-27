section .data
    msg db 'Hello, Holberton', 0x0a, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    
    lea rdi, [msg]
    xor rax, rax
    call printf
    
    mov rsp, rbp
    pop rbp
    xor rax, rax
    ret
