	.globl times
times:
	movl $0, %eax

loop:
	cmpl $0, %edi
	jz	endl
	addl %esi, %eax
	decl %edi
	jmp loop

endl:
	ret

