cmd_i_to_b = 1
cmd_f_to_b = 2
cmd_add = 3
cmd_sub = 4
cmd_mul = 5
cmd_div = 6
cmd_int = 7
cmd_frac = 8
cmd_equal0 = 9
cmd_exact0 = 10
cmd_a_to_buffer = 11
cmd_buffer_to_a = 12
cmd_b_to_a = 13
cmd_halt = 14


FPCode:
	.byte 9                                ; =0   
	.byte 10                               ; ==0  
	.byte 11                               ; a>$  
	.byte 1,42,0,0,0,0                     ; i>b  42
	.byte 1,255,255,255,255,0              ; i>b  -1
	.byte 2,0,0,0,0,0                      ; f>b  0
	.byte 2,204,204,204,128,133            ; f>b  16.1
	.byte 14                               ; halt 

