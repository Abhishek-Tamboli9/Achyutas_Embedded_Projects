	$mod 51
	org 00h
	mov R4,#05
	here:
		mov P1, #11111111b
		acall delay
		mov P1,#00000000b
		acall delay
		
		sjump here
		
		delay: mov R0,#100
		back2: mov R1,#200
		back1: mov R2, #200
		
		again:djnz R2, again
		djnz R1,back1
		djnz R2,back2
		
		ret
		
		end