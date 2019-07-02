; *******************************************************************************************
; *******************************************************************************************
;
;		Name : 		floatingpoint.asm
;		Purpose :	Floating Point Code Routines
;		Date :		2nd July 2019
;		Author : 	Paul Robson (paul@robsons.org.uk)
;
; *******************************************************************************************
; *******************************************************************************************

fpaE = fpa + 4 								; addresses of exponents
fpbE = fpb + 4 								; (first 4 bytes is mantissa with bit 31 set if #0)
fpaSign = fpa + 5 							; sign (0 = +ve, 1 = -ve)
fpbSign = fpb + 5

; *******************************************************************************************
;
;								subtract FPB from FPA (signed)
;
; *******************************************************************************************

Float_SUB:
		lda 	fpbSign 					; flip the sign of the second, and add !
		eor 	#1
		sta 	fpbSign
		
; *******************************************************************************************
;
;									add FPB to FPA (signed)
;
; *******************************************************************************************

Float_ADD:
		jsr 	Float_NormalizeBoth 		; Normalise fpa/fpb.
		;
_FA_TestZero:		
		lda 	fpbE 						; if B.E is zero, adding zero, so no change.
		beq 	_FA_Exit
		;
		lda 	fpaE 						; if A.E is zero, the result is B
		beq 	_FA_CopyBToA
		;
		jsr 	Float_AlignExponents 		; align exponents
		;
		lda 	fpaE 						; if either has zerod out, then go back
		beq 	_FA_TestZero 				; and do zero testing code.
		lda 	fpbE
		beq 	_FA_TestZero
		;
		lda 	fpaSign 					; different signs.
		cmp 	fpbSign
		bne 	_FA_DifferentSigns
		;
		;		Same sign, so add together. Sign of result is sign of either.
		;
		clc
		lda 	fpa+0 						; add together.
		adc 	fpb+0
		sta 	fpa+0
		lda 	fpa+1
		adc 	fpb+1
		sta 	fpa+1
		lda 	fpa+2
		adc 	fpb+2
		sta 	fpa+2
		lda 	fpa+3
		adc 	fpb+3
		sta 	fpa+3
		bcc 	_FA_NoShift 				; no overflow, so no need to shift.

		inc 	fpaE 						; bump fpa-E and shift A right
		beq 	Float_Error

		lsr 	fpa+3
		ror 	fpa+2
		ror 	fpa+1
		ror 	fpa+0

_FA_NoShift:
		lda 	fpa+3						; set bit 3.
		ora 	#$80
		sta 	fpa+3
		rts
		;
		;		Add together when signs are different.
		;
_FA_DifferentSigns:
		sec 								; subtract B from A
		lda 	fpa+0
		sbc 	fpb+0
		sta 	fpa+0 	
		lda 	fpa+1
		sbc 	fpb+1
		sta 	fpa+1 	
		lda 	fpa+2
		sbc 	fpb+2
		sta 	fpa+2 	
		lda 	fpa+3
		sbc 	fpb+3
		sta 	fpa+3 	
		;
		bcs 	_FA_Normalize_Exit 		 	; if A was > B check for zero and exit.
		jsr 	Float_NegateMantissa 		; negate the actual mantissa
		lda 	fpbSign 					; and return the sign of fpb
		sta 	fpaSign
_FA_Normalize_Exit:
		lda 	fpa+0 						; is the mantissa zero ?
		ora 	fpa+1
		ora 	fpa+2
		ora 	fpa+3
		bne 	_FA_NonZero
		sta 	fpaE 						; if so, zero the exponent as they are same number
_FA_NonZero:		
		jmp 	Float_NormalizeBoth

_FA_CopyBToA:
		jsr 	Float_COPY_BToA
_FA_Exit:
		rts		

; *******************************************************************************************
;
;										copy FPB to FPA
;
; *******************************************************************************************

Float_COPY_BToA:
		lda 	fpb+0
		sta 	fpa+0		
		lda 	fpb+1
		sta 	fpa+1		
		lda 	fpb+2
		sta 	fpa+2		
		lda 	fpb+3
		sta 	fpa+3		
		lda 	fpb+4
		sta 	fpa+4		
		lda 	fpb+5
		sta 	fpa+5		
		rts

; *******************************************************************************************
;
;										Handle FP Error
;
; *******************************************************************************************

Float_Error:
		bra 	Float_Error

; *******************************************************************************************
;
;							Normalize Both Floating Point numbers
;
; *******************************************************************************************

Float_NormalizeBoth:
		phx
		ldx 	#fpa 						; normalise FPA
		jsr 	Float_NormalizeX
		ldx 	#fpb 						; normalise FPB
		jsr 	Float_NormalizeX
		plx
		rts
;
;							Normalise the exponent of the fp var at 0,X
;
Float_NormalizeX:
		lda 	4,x 						; exit if exponent is zero, means result is zero.
		beq 	_FNX_Exit
_FNX_Loop:		
		lda 	3,x 						; look at high byte of mantissa
		bmi 	_FNX_Exit 					; if high bit set, don't need to normalise. 	
		;
		asl 	0,x 						; shift the mantissa left
		rol 	1,x
		rol 	2,x
		rol 	3,x
		;
		dec 	4,x 						; decrement the exponent
		bne 	_FNX_Loop 					; if we get too small, exponent is zero.
_FNX_Exit:
		rts

; *******************************************************************************************
;
;						Equalise the exponents of fpa and fpb.
;
; *******************************************************************************************

Float_AlignExponents:
		phx
_FAE_Loop:		
		lda 	fpaE 						; exponents the same ?
		cmp 	fpbE 					
		beq 	_FAE_Exit 					; if the same then exit.
		;
		ldx 	#fpa 						; if fpaE < fpbE then bump fpa
		bcc 	_FAE_Shift
		ldx 	#fpb 						; if fpbE > fpaE then bump fpb
		;
_FAE_Shift:		
		;
		lsr 	3,x
		ror 	2,x
		ror 	1,x
		ror 	0,x
		;
		inc 	4,x 						; increment exponent
		bne 	_FAE_Loop 					; underflowed, so drop out.
_FAE_Exit:
		plx		
		rts		

; *******************************************************************************************
;
;								Negate the mantissa of fpa
;
; *******************************************************************************************

Float_NegateMantissa:
		sec
		lda 	#0
		sbc 	fpa+0
		sta 	fpa+0
		lda 	#0
		sbc 	fpa+1
		sta 	fpa+1
		lda 	#0
		sbc 	fpa+2
		sta 	fpa+2
		lda 	#0
		sbc 	fpa+3
		sta 	fpa+3
		rts