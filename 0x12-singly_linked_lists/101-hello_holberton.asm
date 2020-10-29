extern printf
	extern fflush

	LINUX        equ     80H ; interupt number for entering Linux kernel
	EXIT         equ     60	 ; Linux system call 1 i.e. exit ()

	section .data
outputstringfmt:	 db "%s", 0
sentence0:	 db "Hello, Holberton", 10


	segment .text
	    global  main


main:
	    mov r8, sentence0
	    push r8
	    call print_sentence
	    add rsp, 8
	    call os_return

print_sentence:
	    push rbp
	    mov rbp, rsp
	    push r12
	    mov r12, [rbp + 16]
	    push rsi
	    push rdi
	    push r8
	    push r9
	    push r10
	    mov rsi, r12
	    mov rdi, outputstringfmt
	    xor rax, rax
	    call printf
	    xor rax, rax
	    call fflush
	    pop r10
	    pop r9
	    pop r8
	    pop rdi
	    pop rsi
	    pop r12
	    pop rbp
	    ret

os_return:
	    mov  rax, EXIT      ; Linux system call 1 i.e. exit ()
	    mov  rdi, 0     	; Error code 0 i.e. no errors
	    syscall     	; Interrupt Linux kernel 64-bit
