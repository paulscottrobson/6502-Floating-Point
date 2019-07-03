cmd_i_to_b = 1
cmd_f_to_b = 2
cmd_add = 3
cmd_sub = 4
cmd_mul = 5
cmd_div = 6
cmd_int = 7
cmd_frac = 8
cmd_itof = 9
cmd_ftoi = 10
cmd_equal0 = 11
cmd_exact0 = 12
cmd_a_to_buffer = 13
cmd_buffer_to_a = 14
cmd_b_to_a = 15
cmd_halt = 16


FPCode:
	.byte 2,0,0,0,128,131,0                ; f>b  4
	.byte 15                               ; b>a  
	.byte 2,0,0,0,128,130,0                ; f>b  2
	.byte 6                                ; /    
	.byte 2,0,0,0,128,129,0                ; f>b  1
	.byte 11                               ; =0   
	.byte 16                               ; halt 

