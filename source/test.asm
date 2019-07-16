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
		
fpa		= $08 			; 6 byte mantissa/exponent/sign
fpb		= $10			; 6 byte mantissa/exponent/sign
fpWork  = $18			; 4 byte temporary work area (multiply and divide)

fpBias  = 129			; float bias.

; *******************************************************************************************

addr 	= $04

docmd 	.macro 	
		cmp 	#\1
		bne 	Skip_\2
		jsr 	\2
		jmp 	CheckLoop
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
		.docmd 	cmd_mul,Float_MUL
		.docmd 	cmd_div,Float_DIV
		.docmd 	cmd_ftoi,Float_TOINT
		.docmd 	cmd_itof,Float_TOFLOAT
		cmp 	#cmd_equal0
		beq 	TestNearZero
		cmp 	#cmd_intexact	
		beq 	TestEqualInt
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
		bcc 	GoCheckLoop
		inc 	addr+1
GoCheckLoop:		
		jmp 	CheckLoop

w1:		bra 	w1			
		;
		;		Check exactly same e.g. integer equivalence.
		;
TestEqualInt:
		lda 	fpa+3
		cmp 	fpb+3
		bne 	ZeroFail
		lda 	fpa+2
		cmp 	fpb+2
		bne 	ZeroFail
		lda 	fpa+1
		cmp 	fpb+1
		bne 	ZeroFail
		lda 	fpa+0
		cmp 	fpb+0	
		bne 	ZeroFail
		jmp 	GoCheckLoop
ZeroFail:		
		lda 	#0
		ldx 	addr	
		ldy 	addr+1
		nop
		;
		;		Check very close to zero.
		;
TestNearZero:		
		lda 	fpa+4
		beq 	GoCheckLoop
		sec
		sbc 	fpb+4
		bpl 	_TNZAbs
		eor 	#$FF
		inc 	a
_TNZAbs:		
		cmp 	#$0C
		bcs 	GoCheckLoop
		lda 	#1
		ldx 	addr
		ldy 	addr+1
		nop

EH_Overflow:
EH_DivZero:
Stop:	bra 	Stop

		* = $1200
		.include "floatingpoint.asm"
		* = $1800
		.include "code.inc"
		
		* = $FFFC
		.word	Startup