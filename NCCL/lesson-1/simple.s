	.file	"simple.c"
	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
# BB#0:
	movl	$110, %eax
	ret
.Ltmp0:
	.size	main, .Ltmp0-main


	.ident	"Ubuntu clang version 3.4.2- (branches/release_34) (based on LLVM 3.4.2)"
	.section	".note.GNU-stack","",@progbits
