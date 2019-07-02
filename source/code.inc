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
	.byte 2,49,183,230,192,142,0           ; f>b  12345.6789
	.byte 15                               ; b>a  
	.byte 2,0,0,228,192,142,0              ; f>b  12345
	.byte 4                                ; -    
	.byte 2,241,99,204,173,128,0           ; f>b  0.6789
	.byte 4                                ; -    
	.byte 12                               ; ==0  
	.byte 16                               ; halt 

