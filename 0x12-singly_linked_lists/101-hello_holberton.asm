section .data
    hello db 'Hello, Holberton', 10, 0 ; The string to print, 10 is newline, 0 is null terminator

section .text
    extern printf
    global main

main:
    ; Prepare arguments for printf
    mov rdi, hello ; Move the address of the string to rdi
    xor rax, rax ; Zero out rax (printf is a variadic function, and rax should hold the number of vector registers used)
    call printf ; Call printf function 

    ; Exit
    mov eax, 60 ; System call number (sys_exit)
    xor edi, edi ; Exit code
    syscall ; Call kernel