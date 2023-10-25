section .data

section .bss
    num resb 4
    fact resb 4

section .text
global _start

_start:
    ; Read an integer from the user
    mov eax, 3          ; sys_read
    mov ebx, 0          ; file descriptor 0 (stdin)
    mov ecx, num        ; buffer
    mov edx, 4          ; number of bytes to read
    int 0x80

    ; Convert the input to an integer
    mov eax, 0
    mov ecx, num
convert_digit:
    movzx edx, byte [ecx]
    test dl, dl
    jz done_convert
    sub edx, '0'
    imul eax, eax, 10
    add eax, edx
    inc ecx
    jmp convert_digit
done_convert:

    ; Calculate the factorial
    mov ebx, eax     ; Store the input in ebx
    mov eax, 1
    mov ecx, 1
factorial_loop:
    mul ecx
    inc ecx
    cmp ecx, ebx
    jbe factorial_loop

    ; Convert the result to a string
    mov ecx, fact
    mov edx, 0
convert_to_string:
    add dl, '0'
    xor ah, ah
    div ebx
    dec ecx
    mov [ecx], al
    test ah, ah
    jnz convert_to_string

    ; Write the result to stdout
    mov eax, 4          ; sys_write
    mov ebx, 1          ; file descriptor 1 (stdout)
    lea ecx, [ecx]      ; address of the string
    mov edx, fact       ; length of the string
    int 0x80

    ; Exit the program
    mov eax, 1          ; sys_exit
    mov ebx, 0          ; exit status
    int 0x80
