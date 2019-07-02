; *******************************************************************************************
; *******************************************************************************************
;
;		Name : 		test.asm
;		Purpose :	Floating Point test code interpreter.
;		Date :		2nd July 2019
;		Author : 	Paul Robson (paul@robsons.org.uk)
;
; *******************************************************************************************
; *******************************************************************************************

		* = 0
		nop
fpa		= $08
fpb		= $10

addr 	= $04

docmd 	.macro 	
		cmp 	#\1
		bne 	Skip_\2
		jsr 	\2
		bra 	CheckLoop
Skip_\2:
		.endm

		* = $1000
Startup:
		lda 	#FPCode & $FF
		sta 	addr
		lda 	#FPCode >> 8
		sta 	addr + 1
		;
		;		Main execution loop.
		;
CheckLoop:	
		lda 	(addr)
		inc 	addr
		bne		NoCarry
		inc 	addr+1
NoCarry:
		cmp 	#cmd_f_to_b
		beq 	CopyIn
		cmp 	#cmd_i_to_b
		beq 	CopyIn
		.docmd 	cmd_b_to_a,Float_COPY_BToA
		.docmd 	cmd_add,Float_ADD	
		.docmd 	cmd_sub,Float_SUB
		cmp 	#cmd_equal0
		beq 	TestNearZero
		cmp 	#cmd_exact0
		beq 	TestZero
		cmp 	#cmd_halt
Error:		
		bne 	Error		
		.byte 	2
		;
		;		Copy six following bytes into B.
		;
CopyIn:	ldy 	#5
_CILoop:lda 	(addr),y
		sta 	fpb,y
		dey
		bpl 	_CILoop
		lda 	addr
		clc
		adc 	#6
		sta 	addr
		bcc 	CheckLoop
		inc 	addr+1
		bra 	CheckLoop

w1:		bra 	w1			
		;
		;		Check exactly zero, e.g. exponent = 0
		;
TestZero:
		lda 	fpa+4 	
		beq 	CheckLoop
		lda 	#0
		ldx 	addr
		ldy 	addr+1
		nop
		;
		;		Check very close to zero.
		;
TestNearZero:		
		lda 	fpa+4
		beq 	CheckLoop
		sec
		sbc 	fpb+4
		bpl 	_TNZAbs
		eor 	#$FF
		inc 	a
_TNZAbs:		
		cmp 	#$10
		bcs 	CheckLoop
		nop
		lda 	#1
		ldx 	addr
		ldy 	addr+1
		nop

Stop:	bra 	Stop

		.include "floatingpoint.asm"
		* = $2000
		.include "code.inc"
		
		* = $FFFC
		.word	Startup