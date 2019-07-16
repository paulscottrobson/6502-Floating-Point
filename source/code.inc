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
cmd_intexact = 12
cmd_a_to_buffer = 13
cmd_buffer_to_a = 14
cmd_b_to_a = 15
cmd_halt = 16


FPCode:
	.byte 2,0,0,0,152,133,1                ; f>b  -19
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,237,255,255,255,0,0            ; i>b  -19
	.byte 12                               ; int== 
	.byte 2,45,174,121,131,139,1           ; f>b  -1051.802512
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,229,251,255,255,0,0            ; i>b  -1051
	.byte 12                               ; int== 
	.byte 2,8,86,13,140,142,1              ; f>b  -8963.334018
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,253,220,255,255,0,0            ; i>b  -8963
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,115,159,255,135,142,0          ; f>b  8703.905715
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,255,33,0,0,0,0                 ; i>b  8703
	.byte 12                               ; int== 
	.byte 2,0,0,72,213,141,1               ; f>b  -6825
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,87,229,255,255,0,0             ; i>b  -6825
	.byte 12                               ; int== 
	.byte 2,62,168,226,179,141,1           ; f>b  -5756.33215
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,132,233,255,255,0,0            ; i>b  -5756
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,132,1                ; f>b  -15
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,241,255,255,255,0,0            ; i>b  -15
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,130,0                ; f>b  2
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,0,0,0,0,0                    ; i>b  2
	.byte 12                               ; int== 
	.byte 2,17,54,34,137,142,1             ; f>b  -8776.552803
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,184,221,255,255,0,0            ; i>b  -8776
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,132,0                ; f>b  15
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,15,0,0,0,0,0                   ; i>b  15
	.byte 12                               ; int== 
	.byte 2,13,195,223,249,141,1           ; f>b  -7995.970241
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,224,255,255,0,0            ; i>b  -7995
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,15,42,250,237,141,1            ; f>b  -7615.270538
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,65,226,255,255,0,0             ; i>b  -7615
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,246,141,43,246,141,0           ; f>b  7877.444318
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,30,0,0,0,0                 ; i>b  7877
	.byte 12                               ; int== 
	.byte 2,48,200,42,224,141,1            ; f>b  -7173.347748
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,251,227,255,255,0,0            ; i>b  -7173
	.byte 12                               ; int== 
	.byte 2,186,142,110,131,139,0          ; f>b  1051.454923
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,27,4,0,0,0,0                   ; i>b  1051
	.byte 12                               ; int== 
	.byte 2,193,178,244,148,142,1          ; f>b  -9533.174566
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,195,218,255,255,0,0            ; i>b  -9533
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,221,145,35,142,137,1           ; f>b  -284.277889
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,228,254,255,255,0,0            ; i>b  -284
	.byte 12                               ; int== 
	.byte 2,89,30,88,246,139,1             ; f>b  -1970.753705
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,78,248,255,255,0,0             ; i>b  -1970
	.byte 12                               ; int== 
	.byte 2,215,154,217,151,142,0          ; f>b  9718.401212
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,246,37,0,0,0,0                 ; i>b  9718
	.byte 12                               ; int== 
	.byte 2,117,66,128,143,142,1           ; f>b  -9184.0649
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,32,220,255,255,0,0             ; i>b  -9184
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,22,229,140,225,141,0           ; f>b  7217.61186
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,49,28,0,0,0,0                  ; i>b  7217
	.byte 12                               ; int== 
	.byte 2,174,26,245,133,142,0           ; f>b  8573.276057
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,125,33,0,0,0,0                 ; i>b  8573
	.byte 12                               ; int== 
	.byte 2,0,0,0,208,132,1                ; f>b  -13
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,243,255,255,255,0,0            ; i>b  -13
	.byte 12                               ; int== 
	.byte 2,2,180,255,234,141,1            ; f>b  -7519.962896
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,161,226,255,255,0,0            ; i>b  -7519
	.byte 12                               ; int== 
	.byte 2,0,0,112,155,141,0              ; f>b  4974
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,110,19,0,0,0,0                 ; i>b  4974
	.byte 12                               ; int== 
	.byte 2,179,227,36,218,141,1           ; f>b  -6980.611182
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,188,228,255,255,0,0            ; i>b  -6980
	.byte 12                               ; int== 
	.byte 2,214,87,175,204,140,1           ; f>b  -3274.958945
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,54,243,255,255,0,0             ; i>b  -3274
	.byte 12                               ; int== 
	.byte 2,137,186,40,131,140,0           ; f>b  2098.545541
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,50,8,0,0,0,0                   ; i>b  2098
	.byte 12                               ; int== 
	.byte 2,22,102,201,248,136,1           ; f>b  -248.786714
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,255,255,255,0,0              ; i>b  -248
	.byte 12                               ; int== 
	.byte 2,225,176,12,219,140,1           ; f>b  -3504.793184
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,80,242,255,255,0,0             ; i>b  -3504
	.byte 12                               ; int== 
	.byte 2,38,55,150,147,140,0            ; f>b  2361.388464
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,57,9,0,0,0,0                   ; i>b  2361
	.byte 12                               ; int== 
	.byte 2,209,87,47,185,140,0            ; f>b  2962.95894
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,146,11,0,0,0,0                 ; i>b  2962
	.byte 12                               ; int== 
	.byte 2,129,94,86,184,141,0            ; f>b  5898.796145
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,10,23,0,0,0,0                  ; i>b  5898
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,200,142,141,1              ; f>b  -4569
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,39,238,255,255,0,0             ; i>b  -4569
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,133,1                ; f>b  -30
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,226,255,255,255,0,0            ; i>b  -30
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,132,0                ; f>b  12
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,12,0,0,0,0,0                   ; i>b  12
	.byte 12                               ; int== 
	.byte 2,197,163,1,224,141,1            ; f>b  -7168.204967
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,228,255,255,0,0              ; i>b  -7168
	.byte 12                               ; int== 
	.byte 2,68,56,142,211,141,0            ; f>b  6769.777475
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,113,26,0,0,0,0                 ; i>b  6769
	.byte 12                               ; int== 
	.byte 2,61,40,144,202,137,0            ; f>b  405.126228
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,149,1,0,0,0,0                  ; i>b  405
	.byte 12                               ; int== 
	.byte 2,21,182,181,195,140,1           ; f>b  -3131.356954
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,243,255,255,0,0            ; i>b  -3131
	.byte 12                               ; int== 
	.byte 2,173,175,77,231,140,1           ; f>b  -3700.85539
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,140,241,255,255,0,0            ; i>b  -3700
	.byte 12                               ; int== 
	.byte 2,49,250,216,240,139,1           ; f>b  -1926.780541
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,122,248,255,255,0,0            ; i>b  -1926
	.byte 12                               ; int== 
	.byte 2,75,84,214,247,140,1            ; f>b  -3965.39558
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,131,240,255,255,0,0            ; i>b  -3965
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,224,96,107,224,140,1           ; f>b  -3590.711152
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,250,241,255,255,0,0            ; i>b  -3590
	.byte 12                               ; int== 
	.byte 2,141,61,102,199,141,0           ; f>b  6380.780055
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,236,24,0,0,0,0                 ; i>b  6380
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,28,135,158,186,141,0           ; f>b  5971.815972
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,83,23,0,0,0,0                  ; i>b  5971
	.byte 12                               ; int== 
	.byte 2,7,15,164,230,141,1             ; f>b  -7380.507338
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,44,227,255,255,0,0             ; i>b  -7380
	.byte 12                               ; int== 
	.byte 2,177,153,4,130,141,1            ; f>b  -4160.575046
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,192,239,255,255,0,0            ; i>b  -4160
	.byte 12                               ; int== 
	.byte 2,121,226,133,245,136,1          ; f>b  -245.522987
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,11,255,255,255,0,0             ; i>b  -245
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,144,132,1                ; f>b  -9
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,247,255,255,255,0,0            ; i>b  -9
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,131,1                ; f>b  -5
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,251,255,255,255,0,0            ; i>b  -5
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,133,0                ; f>b  16
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,16,0,0,0,0,0                   ; i>b  16
	.byte 12                               ; int== 
	.byte 2,164,11,151,159,140,0           ; f>b  2553.440342
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,249,9,0,0,0,0                  ; i>b  2553
	.byte 12                               ; int== 
	.byte 2,57,93,255,139,139,1            ; f>b  -1119.98013
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,161,251,255,255,0,0            ; i>b  -1119
	.byte 12                               ; int== 
	.byte 2,199,53,0,143,142,0             ; f>b  9152.052517
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,192,35,0,0,0,0                 ; i>b  9152
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,133,1                ; f>b  -20
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,236,255,255,255,0,0            ; i>b  -20
	.byte 12                               ; int== 
	.byte 2,8,157,177,133,141,1            ; f>b  -4278.201677
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,74,239,255,255,0,0             ; i>b  -4278
	.byte 12                               ; int== 
	.byte 2,117,73,1,167,141,1             ; f>b  -5344.160868
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,32,235,255,255,0,0             ; i>b  -5344
	.byte 12                               ; int== 
	.byte 2,162,47,165,228,141,1           ; f>b  -7316.648259
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,108,227,255,255,0,0            ; i>b  -7316
	.byte 12                               ; int== 
	.byte 2,181,185,19,178,140,0           ; f>b  2849.232839
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,33,11,0,0,0,0                  ; i>b  2849
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,76,227,20,155,141,1            ; f>b  -4962.610986
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,158,236,255,255,0,0            ; i>b  -4962
	.byte 12                               ; int== 
	.byte 2,117,131,225,147,142,0          ; f>b  9464.378379
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,248,36,0,0,0,0                 ; i>b  9464
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,132,1                ; f>b  -15
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,241,255,255,255,0,0            ; i>b  -15
	.byte 12                               ; int== 
	.byte 2,0,0,128,245,141,1              ; f>b  -7856
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,80,225,255,255,0,0             ; i>b  -7856
	.byte 12                               ; int== 
	.byte 2,158,219,162,140,139,0          ; f>b  1125.089309
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,101,4,0,0,0,0                  ; i>b  1125
	.byte 12                               ; int== 
	.byte 2,0,0,0,208,132,1                ; f>b  -13
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,243,255,255,255,0,0            ; i>b  -13
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,250,173,116,146,140,1          ; f>b  -2343.292475
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,217,246,255,255,0,0            ; i>b  -2343
	.byte 12                               ; int== 
	.byte 2,151,247,212,139,141,1          ; f>b  -4474.620894
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,134,238,255,255,0,0            ; i>b  -4474
	.byte 12                               ; int== 
	.byte 2,34,68,23,183,140,0             ; f>b  2929.454134
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,113,11,0,0,0,0                 ; i>b  2929
	.byte 12                               ; int== 
	.byte 2,167,181,47,201,140,1           ; f>b  -3218.981849
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,110,243,255,255,0,0            ; i>b  -3218
	.byte 12                               ; int== 
	.byte 2,238,203,233,212,135,0          ; f>b  106.456634
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,106,0,0,0,0,0                  ; i>b  106
	.byte 12                               ; int== 
	.byte 2,210,68,162,217,140,1           ; f>b  -3482.141802
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,102,242,255,255,0,0            ; i>b  -3482
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,131,0                ; f>b  4
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,4,0,0,0,0,0                    ; i>b  4
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,177,192,190,128,142,0          ; f>b  8239.688178
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,47,32,0,0,0,0                  ; i>b  8239
	.byte 12                               ; int== 
	.byte 2,80,74,206,135,142,0            ; f>b  8691.572571
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,243,33,0,0,0,0                 ; i>b  8691
	.byte 12                               ; int== 
	.byte 2,202,225,5,232,140,0            ; f>b  3712.367625
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,128,14,0,0,0,0                 ; i>b  3712
	.byte 12                               ; int== 
	.byte 2,0,0,40,206,141,1               ; f>b  -6597
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,59,230,255,255,0,0             ; i>b  -6597
	.byte 12                               ; int== 
	.byte 2,0,0,28,133,142,1               ; f>b  -8519
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,185,222,255,255,0,0            ; i>b  -8519
	.byte 12                               ; int== 
	.byte 2,107,52,197,239,141,1           ; f>b  -7672.650595
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,226,255,255,0,0              ; i>b  -7672
	.byte 12                               ; int== 
	.byte 2,0,0,184,159,141,0              ; f>b  5111
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,247,19,0,0,0,0                 ; i>b  5111
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,96,208,169,160,141,1           ; f>b  -5141.226746
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,235,235,255,255,0,0            ; i>b  -5141
	.byte 12                               ; int== 
	.byte 2,248,49,219,217,141,0           ; f>b  6971.399399
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,59,27,0,0,0,0                  ; i>b  6971
	.byte 12                               ; int== 
	.byte 2,8,1,186,223,141,0              ; f>b  7159.250505
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,247,27,0,0,0,0                 ; i>b  7159
	.byte 12                               ; int== 
	.byte 2,139,239,210,148,140,0          ; f>b  2381.183483
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,77,9,0,0,0,0                   ; i>b  2381
	.byte 12                               ; int== 
	.byte 2,31,83,88,242,140,0             ; f>b  3877.520294
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,37,15,0,0,0,0                  ; i>b  3877
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,129,1                ; f>b  -1
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,255,255,255,255,0,0            ; i>b  -1
	.byte 12                               ; int== 
	.byte 2,150,64,23,222,141,0            ; f>b  7106.906538
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,194,27,0,0,0,0                 ; i>b  7106
	.byte 12                               ; int== 
	.byte 2,187,25,143,148,142,1           ; f>b  -9507.77513
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,221,218,255,255,0,0            ; i>b  -9507
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,130,1                ; f>b  -2
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,254,255,255,255,0,0            ; i>b  -2
	.byte 12                               ; int== 
	.byte 2,126,236,243,179,139,0          ; f>b  1439.622619
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,159,5,0,0,0,0                  ; i>b  1439
	.byte 12                               ; int== 
	.byte 2,0,0,0,158,138,1                ; f>b  -632
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,136,253,255,255,0,0            ; i>b  -632
	.byte 12                               ; int== 
	.byte 2,231,24,254,143,141,1           ; f>b  -4607.76216
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,1,238,255,255,0,0              ; i>b  -4607
	.byte 12                               ; int== 
	.byte 2,90,35,193,185,141,1            ; f>b  -5944.142262
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,200,232,255,255,0,0            ; i>b  -5944
	.byte 12                               ; int== 
	.byte 2,119,13,149,184,140,0           ; f>b  2953.315788
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,137,11,0,0,0,0                 ; i>b  2953
	.byte 12                               ; int== 
	.byte 2,40,64,103,249,139,1            ; f>b  -1995.226582
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,53,248,255,255,0,0             ; i>b  -1995
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,52,200,241,141,0             ; f>b  7737.025391
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,57,30,0,0,0,0                  ; i>b  7737
	.byte 12                               ; int== 
	.byte 2,226,12,230,144,142,0           ; f>b  9273.512584
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,57,36,0,0,0,0                  ; i>b  9273
	.byte 12                               ; int== 
	.byte 2,237,41,84,166,141,1            ; f>b  -5322.520473
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,54,235,255,255,0,0             ; i>b  -5322
	.byte 12                               ; int== 
	.byte 2,94,224,176,165,141,0           ; f>b  5302.109556
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,182,20,0,0,0,0                 ; i>b  5302
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,132,1                ; f>b  -12
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,244,255,255,255,0,0            ; i>b  -12
	.byte 12                               ; int== 
	.byte 2,171,233,120,144,142,1          ; f>b  -9246.228194
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,226,219,255,255,0,0            ; i>b  -9246
	.byte 12                               ; int== 
	.byte 2,0,0,192,196,141,1              ; f>b  -6296
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,104,231,255,255,0,0            ; i>b  -6296
	.byte 12                               ; int== 
	.byte 2,212,249,179,186,140,0          ; f>b  2987.248494
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,171,11,0,0,0,0                 ; i>b  2987
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,88,242,88,235,141,1            ; f>b  -7531.118333
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,149,226,255,255,0,0            ; i>b  -7531
	.byte 12                               ; int== 
	.byte 2,110,185,217,170,141,1          ; f>b  -5467.215542
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,165,234,255,255,0,0            ; i>b  -5467
	.byte 12                               ; int== 
	.byte 2,43,179,87,241,141,0            ; f>b  7722.962486
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,42,30,0,0,0,0                  ; i>b  7722
	.byte 12                               ; int== 
	.byte 2,95,178,96,143,140,1            ; f>b  -2294.043548
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,10,247,255,255,0,0             ; i>b  -2294
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,192,247,139,0              ; f>b  1982
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,190,7,0,0,0,0                  ; i>b  1982
	.byte 12                               ; int== 
	.byte 2,153,84,160,162,141,0           ; f>b  5204.041308
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,84,20,0,0,0,0                  ; i>b  5204
	.byte 12                               ; int== 
	.byte 2,110,112,224,245,141,1          ; f>b  -7868.054898
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,68,225,255,255,0,0             ; i>b  -7868
	.byte 12                               ; int== 
	.byte 2,0,0,0,224,132,0                ; f>b  14
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,14,0,0,0,0,0                   ; i>b  14
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,128,174,140,1              ; f>b  -2792
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,24,245,255,255,0,0             ; i>b  -2792
	.byte 12                               ; int== 
	.byte 2,23,94,71,225,140,1             ; f>b  -3604.460472
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,236,241,255,255,0,0            ; i>b  -3604
	.byte 12                               ; int== 
	.byte 2,153,220,180,179,140,0          ; f>b  2875.303857
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,59,11,0,0,0,0                  ; i>b  2875
	.byte 12                               ; int== 
	.byte 2,17,40,38,237,141,1             ; f>b  -7588.769565
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,92,226,255,255,0,0             ; i>b  -7588
	.byte 12                               ; int== 
	.byte 2,0,0,120,141,142,0              ; f>b  9054
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,94,35,0,0,0,0                  ; i>b  9054
	.byte 12                               ; int== 
	.byte 2,241,47,151,184,141,1           ; f>b  -5906.898409
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,238,232,255,255,0,0            ; i>b  -5906
	.byte 12                               ; int== 
	.byte 2,20,247,96,130,139,1            ; f>b  -1043.030161
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,237,251,255,255,0,0            ; i>b  -1043
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,130,0                ; f>b  2
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,0,0,0,0,0                    ; i>b  2
	.byte 12                               ; int== 
	.byte 2,64,112,1,223,141,0             ; f>b  7136.179811
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,224,27,0,0,0,0                 ; i>b  7136
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,185,6,98,148,141,0             ; f>b  4748.253283
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,140,18,0,0,0,0                 ; i>b  4748
	.byte 12                               ; int== 
	.byte 2,201,229,204,233,139,0          ; f>b  1870.40305
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,78,7,0,0,0,0                   ; i>b  1870
	.byte 12                               ; int== 
	.byte 2,64,55,48,238,141,0             ; f>b  7622.026979
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,198,29,0,0,0,0                 ; i>b  7622
	.byte 12                               ; int== 
	.byte 2,42,189,61,170,141,1            ; f>b  -5447.717367
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,185,234,255,255,0,0            ; i>b  -5447
	.byte 12                               ; int== 
	.byte 2,0,0,16,185,141,0               ; f>b  5922
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,34,23,0,0,0,0                  ; i>b  5922
	.byte 12                               ; int== 
	.byte 2,53,45,224,130,140,0            ; f>b  2094.011037
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,46,8,0,0,0,0                   ; i>b  2094
	.byte 12                               ; int== 
	.byte 2,0,0,192,152,142,1              ; f>b  -9776
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,208,217,255,255,0,0            ; i>b  -9776
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,150,128,196,188,141,1          ; f>b  -6040.562787
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,104,232,255,255,0,0            ; i>b  -6040
	.byte 12                               ; int== 
	.byte 2,0,0,24,200,141,1               ; f>b  -6403
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,253,230,255,255,0,0            ; i>b  -6403
	.byte 12                               ; int== 
	.byte 2,220,163,223,166,141,0          ; f>b  5339.955011
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,219,20,0,0,0,0                 ; i>b  5339
	.byte 12                               ; int== 
	.byte 2,3,39,91,180,141,0              ; f>b  5771.39405
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,139,22,0,0,0,0                 ; i>b  5771
	.byte 12                               ; int== 
	.byte 2,151,78,30,195,141,0            ; f>b  6243.788374
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,99,24,0,0,0,0                  ; i>b  6243
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,132,1                ; f>b  -8
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,248,255,255,255,0,0            ; i>b  -8
	.byte 12                               ; int== 
	.byte 2,0,0,0,224,132,0                ; f>b  14
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,14,0,0,0,0,0                   ; i>b  14
	.byte 12                               ; int== 
	.byte 2,191,97,170,205,138,0           ; f>b  822.662216
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,54,3,0,0,0,0                   ; i>b  822
	.byte 12                               ; int== 
	.byte 2,84,145,69,160,141,0            ; f>b  5128.695961
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,20,0,0,0,0                   ; i>b  5128
	.byte 12                               ; int== 
	.byte 2,46,206,42,135,142,1            ; f>b  -8650.701349
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,54,222,255,255,0,0             ; i>b  -8650
	.byte 12                               ; int== 
	.byte 2,0,0,0,136,133,1                ; f>b  -17
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,239,255,255,255,0,0            ; i>b  -17
	.byte 12                               ; int== 
	.byte 2,22,52,177,142,142,1            ; f>b  -9132.300866
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,84,220,255,255,0,0             ; i>b  -9132
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,46,24,56,197,141,0             ; f>b  6311.011808
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,167,24,0,0,0,0                 ; i>b  6311
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,131,1                ; f>b  -4
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,252,255,255,255,0,0            ; i>b  -4
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,133,1                ; f>b  -16
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,240,255,255,255,0,0            ; i>b  -16
	.byte 12                               ; int== 
	.byte 2,0,0,48,139,142,1               ; f>b  -8908
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,52,221,255,255,0,0             ; i>b  -8908
	.byte 12                               ; int== 
	.byte 2,63,185,205,130,142,1           ; f>b  -8371.430906
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,77,223,255,255,0,0             ; i>b  -8371
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,166,49,91,204,141,0            ; f>b  6539.399243
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,139,25,0,0,0,0                 ; i>b  6539
	.byte 12                               ; int== 
	.byte 2,11,122,140,133,142,1           ; f>b  -8547.119184
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,157,222,255,255,0,0            ; i>b  -8547
	.byte 12                               ; int== 
	.byte 2,15,229,190,204,140,0           ; f>b  3275.930923
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,203,12,0,0,0,0                 ; i>b  3275
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,132,1                ; f>b  -10
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,246,255,255,255,0,0            ; i>b  -10
	.byte 12                               ; int== 
	.byte 2,76,158,44,148,140,1            ; f>b  -2370.788647
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,190,246,255,255,0,0            ; i>b  -2370
	.byte 12                               ; int== 
	.byte 2,0,0,72,197,141,1               ; f>b  -6313
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,87,231,255,255,0,0             ; i>b  -6313
	.byte 12                               ; int== 
	.byte 2,146,205,48,153,142,1           ; f>b  -9804.200754
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,180,217,255,255,0,0            ; i>b  -9804
	.byte 12                               ; int== 
	.byte 2,69,138,28,129,142,0            ; f>b  8263.135031
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,71,32,0,0,0,0                  ; i>b  8263
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,136,30,217,173,140,1           ; f>b  -2781.569954
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,35,245,255,255,0,0             ; i>b  -2781
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,28,214,237,128,142,1           ; f>b  -8251.459094
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,223,255,255,0,0            ; i>b  -8251
	.byte 12                               ; int== 
	.byte 2,52,252,159,154,142,0           ; f>b  9895.996293
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,167,38,0,0,0,0                 ; i>b  9895
	.byte 12                               ; int== 
	.byte 2,180,105,126,200,141,1          ; f>b  -6415.801613
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,241,230,255,255,0,0            ; i>b  -6415
	.byte 12                               ; int== 
	.byte 2,83,46,217,155,142,1            ; f>b  -9974.295239
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,10,217,255,255,0,0             ; i>b  -9974
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,42,137,57,255,140,1            ; f>b  -4083.595988
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,13,240,255,255,0,0             ; i>b  -4083
	.byte 12                               ; int== 
	.byte 2,128,140,85,149,139,0           ; f>b  1194.673401
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,170,4,0,0,0,0                  ; i>b  1194
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,224,120,6,189,141,1            ; f>b  -6048.809022
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,96,232,255,255,0,0             ; i>b  -6048
	.byte 12                               ; int== 
	.byte 2,166,236,183,200,141,1          ; f>b  -6422.990551
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,234,230,255,255,0,0            ; i>b  -6422
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,120,72,232,237,141,1           ; f>b  -7613.035386
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,67,226,255,255,0,0             ; i>b  -7613
	.byte 12                               ; int== 
	.byte 2,0,0,56,196,141,1               ; f>b  -6279
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,121,231,255,255,0,0            ; i>b  -6279
	.byte 12                               ; int== 
	.byte 2,160,192,171,221,136,1          ; f>b  -221.670908
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,35,255,255,255,0,0             ; i>b  -221
	.byte 12                               ; int== 
	.byte 2,0,0,16,130,140,1               ; f>b  -2081
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,223,247,255,255,0,0            ; i>b  -2081
	.byte 12                               ; int== 
	.byte 2,0,0,16,155,142,0               ; f>b  9924
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,196,38,0,0,0,0                 ; i>b  9924
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,144,132,0                ; f>b  9
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,9,0,0,0,0,0                    ; i>b  9
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,137,10,102,230,141,0           ; f>b  7372.755146
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,204,28,0,0,0,0                 ; i>b  7372
	.byte 12                               ; int== 
	.byte 2,255,87,228,132,142,0           ; f>b  8505.085936
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,57,33,0,0,0,0                  ; i>b  8505
	.byte 12                               ; int== 
	.byte 2,46,169,239,205,139,1           ; f>b  -1647.489402
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,145,249,255,255,0,0            ; i>b  -1647
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,72,225,143,134,141,0           ; f>b  4305.985001
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,209,16,0,0,0,0                 ; i>b  4305
	.byte 12                               ; int== 
	.byte 2,228,57,129,206,141,0           ; f>b  6608.153267
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,208,25,0,0,0,0                 ; i>b  6608
	.byte 12                               ; int== 
	.byte 2,195,147,216,184,141,1          ; f>b  -5915.072151
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,229,232,255,255,0,0            ; i>b  -5915
	.byte 12                               ; int== 
	.byte 2,78,142,246,210,141,0           ; f>b  6750.819485
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,94,26,0,0,0,0                  ; i>b  6750
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,171,189,98,185,141,0           ; f>b  5932.342612
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,44,23,0,0,0,0                  ; i>b  5932
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,102,18,163,247,141,0           ; f>b  7924.383984
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,244,30,0,0,0,0                 ; i>b  7924
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,82,125,190,165,138,0           ; f>b  662.976399
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,150,2,0,0,0,0                  ; i>b  662
	.byte 12                               ; int== 
	.byte 2,35,227,48,227,141,0            ; f>b  7270.110908
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,102,28,0,0,0,0                 ; i>b  7270
	.byte 12                               ; int== 
	.byte 2,128,239,119,155,142,1          ; f>b  -9949.98389
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,35,217,255,255,0,0             ; i>b  -9949
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,131,1                ; f>b  -5
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,251,255,255,255,0,0            ; i>b  -5
	.byte 12                               ; int== 
	.byte 2,134,79,233,128,142,1           ; f>b  -8250.327663
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,198,223,255,255,0,0            ; i>b  -8250
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,133,0                ; f>b  20
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,20,0,0,0,0,0                   ; i>b  20
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,132,0                ; f>b  8
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,0,0,0,0,0                    ; i>b  8
	.byte 12                               ; int== 
	.byte 2,146,176,167,248,135,1          ; f>b  -124.327519
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,132,255,255,255,0,0            ; i>b  -124
	.byte 12                               ; int== 
	.byte 2,27,46,135,184,141,1            ; f>b  -5904.897514
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,240,232,255,255,0,0            ; i>b  -5904
	.byte 12                               ; int== 
	.byte 2,7,134,189,212,140,1            ; f>b  -3403.845222
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,181,242,255,255,0,0            ; i>b  -3403
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,73,150,138,166,141,1           ; f>b  -5329.323383
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,47,235,255,255,0,0             ; i>b  -5329
	.byte 12                               ; int== 
	.byte 2,86,85,78,168,141,1             ; f>b  -5385.791669
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,247,234,255,255,0,0            ; i>b  -5385
	.byte 12                               ; int== 
	.byte 2,104,2,160,169,138,0            ; f>b  678.500147
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,166,2,0,0,0,0                  ; i>b  678
	.byte 12                               ; int== 
	.byte 2,70,12,201,167,141,1            ; f>b  -5369.130994
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,7,235,255,255,0,0              ; i>b  -5369
	.byte 12                               ; int== 
	.byte 2,183,65,9,229,137,0             ; f>b  458.072318
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,202,1,0,0,0,0                  ; i>b  458
	.byte 12                               ; int== 
	.byte 2,210,52,128,158,139,0           ; f>b  1268.006448
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,244,4,0,0,0,0                  ; i>b  1268
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,251,188,172,130,141,0          ; f>b  4181.592277
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,85,16,0,0,0,0                  ; i>b  4181
	.byte 12                               ; int== 
	.byte 2,29,233,217,241,141,1           ; f>b  -7739.238825
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,225,255,255,0,0            ; i>b  -7739
	.byte 12                               ; int== 
	.byte 2,148,22,10,225,140,1            ; f>b  -3600.630513
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,240,241,255,255,0,0            ; i>b  -3600
	.byte 12                               ; int== 
	.byte 2,198,239,116,136,142,1          ; f>b  -8733.234156
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,227,221,255,255,0,0            ; i>b  -8733
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,58,252,138,234,141,1           ; f>b  -7505.373158
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,175,226,255,255,0,0            ; i>b  -7505
	.byte 12                               ; int== 
	.byte 2,22,113,77,156,141,0            ; f>b  5001.680218
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,137,19,0,0,0,0                 ; i>b  5001
	.byte 12                               ; int== 
	.byte 2,138,112,226,215,140,1          ; f>b  -3454.152476
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,130,242,255,255,0,0            ; i>b  -3454
	.byte 12                               ; int== 
	.byte 2,16,38,223,132,142,0            ; f>b  8503.787171
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,55,33,0,0,0,0                  ; i>b  8503
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,131,1                ; f>b  -4
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,252,255,255,255,0,0            ; i>b  -4
	.byte 12                               ; int== 
	.byte 2,0,0,0,144,132,0                ; f>b  9
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,9,0,0,0,0,0                    ; i>b  9
	.byte 12                               ; int== 
	.byte 2,26,163,207,151,142,0           ; f>b  9715.909279
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,243,37,0,0,0,0                 ; i>b  9715
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,159,73,31,253,139,0            ; f>b  2024.977737
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,232,7,0,0,0,0                  ; i>b  2024
	.byte 12                               ; int== 
	.byte 2,66,85,218,173,140,0            ; f>b  2781.645815
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,221,10,0,0,0,0                 ; i>b  2781
	.byte 12                               ; int== 
	.byte 2,0,0,128,250,137,1              ; f>b  -501
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,11,254,255,255,0,0             ; i>b  -501
	.byte 12                               ; int== 
	.byte 2,238,232,93,249,137,1           ; f>b  -498.733671
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,14,254,255,255,0,0             ; i>b  -498
	.byte 12                               ; int== 
	.byte 2,118,156,184,206,141,0          ; f>b  6615.076397
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,215,25,0,0,0,0                 ; i>b  6615
	.byte 12                               ; int== 
	.byte 2,0,0,0,176,132,0                ; f>b  11
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,11,0,0,0,0,0                   ; i>b  11
	.byte 12                               ; int== 
	.byte 2,97,49,47,150,139,1             ; f>b  -1201.474778
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,79,251,255,255,0,0             ; i>b  -1201
	.byte 12                               ; int== 
	.byte 2,92,167,41,255,140,1            ; f>b  -4082.60336
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,14,240,255,255,0,0             ; i>b  -4082
	.byte 12                               ; int== 
	.byte 2,17,194,143,192,139,0           ; f>b  1540.49244
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,4,6,0,0,0,0                    ; i>b  1540
	.byte 12                               ; int== 
	.byte 2,0,0,0,144,132,0                ; f>b  9
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,9,0,0,0,0,0                    ; i>b  9
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,29,139,117,183,135,1           ; f>b  -91.729577
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,165,255,255,255,0,0            ; i>b  -91
	.byte 12                               ; int== 
	.byte 2,174,122,86,220,138,1           ; f>b  -881.351238
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,143,252,255,255,0,0            ; i>b  -881
	.byte 12                               ; int== 
	.byte 2,22,131,125,165,141,1           ; f>b  -5295.689007
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,81,235,255,255,0,0             ; i>b  -5295
	.byte 12                               ; int== 
	.byte 2,17,46,139,132,141,0            ; f>b  4241.397494
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,145,16,0,0,0,0                 ; i>b  4241
	.byte 12                               ; int== 
	.byte 2,0,0,0,152,133,1                ; f>b  -19
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,237,255,255,255,0,0            ; i>b  -19
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,130,0                ; f>b  2
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,0,0,0,0,0                    ; i>b  2
	.byte 12                               ; int== 
	.byte 2,202,207,210,173,139,0          ; f>b  1390.587865
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,110,5,0,0,0,0                  ; i>b  1390
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,241,55,216,141,142,0           ; f>b  9078.054633
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,118,35,0,0,0,0                 ; i>b  9078
	.byte 12                               ; int== 
	.byte 2,59,206,218,148,141,1           ; f>b  -4763.3507
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,101,237,255,255,0,0            ; i>b  -4763
	.byte 12                               ; int== 
	.byte 2,0,0,0,208,132,0                ; f>b  13
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,13,0,0,0,0,0                   ; i>b  13
	.byte 12                               ; int== 
	.byte 2,187,125,202,133,136,0          ; f>b  133.790981
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,133,0,0,0,0,0                  ; i>b  133
	.byte 12                               ; int== 
	.byte 2,77,71,181,148,141,1            ; f>b  -4758.659815
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,106,237,255,255,0,0            ; i>b  -4758
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,129,177,69,159,138,0           ; f>b  637.088959
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,125,2,0,0,0,0                  ; i>b  637
	.byte 12                               ; int== 
	.byte 2,67,31,205,229,141,0            ; f>b  7353.640266
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,185,28,0,0,0,0                 ; i>b  7353
	.byte 12                               ; int== 
	.byte 2,105,11,122,215,141,1           ; f>b  -6895.255573
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,17,229,255,255,0,0             ; i>b  -6895
	.byte 12                               ; int== 
	.byte 2,238,45,84,232,140,0            ; f>b  3717.261214
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,133,14,0,0,0,0                 ; i>b  3717
	.byte 12                               ; int== 
	.byte 2,140,215,21,195,141,1           ; f>b  -6242.730249
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,158,231,255,255,0,0            ; i>b  -6242
	.byte 12                               ; int== 
	.byte 2,58,218,48,155,142,0            ; f>b  9932.213115
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,204,38,0,0,0,0                 ; i>b  9932
	.byte 12                               ; int== 
	.byte 2,162,161,12,129,142,1           ; f>b  -8259.157845
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,189,223,255,255,0,0            ; i>b  -8259
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,130,0                ; f>b  3
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,3,0,0,0,0,0                    ; i>b  3
	.byte 12                               ; int== 
	.byte 2,39,52,62,138,142,0             ; f>b  8847.550931
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,143,34,0,0,0,0                 ; i>b  8847
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,131,0                ; f>b  6
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,6,0,0,0,0,0                    ; i>b  6
	.byte 12                               ; int== 
	.byte 2,135,44,133,153,142,0           ; f>b  9825.293486
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,97,38,0,0,0,0                  ; i>b  9825
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,152,50,109,228,138,1           ; f>b  -913.706213
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,111,252,255,255,0,0            ; i>b  -913
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,197,52,85,197,139,1            ; f>b  -1578.662692
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,214,249,255,255,0,0            ; i>b  -1578
	.byte 12                               ; int== 
	.byte 2,151,198,250,135,142,1          ; f>b  -8702.693937
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,222,255,255,0,0              ; i>b  -8702
	.byte 12                               ; int== 
	.byte 2,0,0,208,179,141,1              ; f>b  -5754
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,134,233,255,255,0,0            ; i>b  -5754
	.byte 12                               ; int== 
	.byte 2,144,237,113,222,141,1          ; f>b  -7118.240999
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,50,228,255,255,0,0             ; i>b  -7118
	.byte 12                               ; int== 
	.byte 2,253,37,111,130,141,1           ; f>b  -4173.89355
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,179,239,255,255,0,0            ; i>b  -4173
	.byte 12                               ; int== 
	.byte 2,150,227,26,195,141,0           ; f>b  6243.361127
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,99,24,0,0,0,0                  ; i>b  6243
	.byte 12                               ; int== 
	.byte 2,0,0,0,160,140,1                ; f>b  -2560
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,246,255,255,0,0              ; i>b  -2560
	.byte 12                               ; int== 
	.byte 2,194,166,142,137,142,0          ; f>b  8803.662851
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,99,34,0,0,0,0                  ; i>b  8803
	.byte 12                               ; int== 
	.byte 2,101,198,32,191,141,0           ; f>b  6116.096874
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,228,23,0,0,0,0                 ; i>b  6116
	.byte 12                               ; int== 
	.byte 2,102,122,126,149,141,1          ; f>b  -4783.809766
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,81,237,255,255,0,0             ; i>b  -4783
	.byte 12                               ; int== 
	.byte 2,0,0,192,223,141,1              ; f>b  -7160
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,228,255,255,0,0              ; i>b  -7160
	.byte 12                               ; int== 
	.byte 2,85,103,73,235,136,0            ; f>b  235.286733
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,235,0,0,0,0,0                  ; i>b  235
	.byte 12                               ; int== 
	.byte 2,91,27,200,236,141,0            ; f>b  7577.013359
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,153,29,0,0,0,0                 ; i>b  7577
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,84,198,52,231,139,0            ; f>b  1849.64921
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,57,7,0,0,0,0                   ; i>b  1849
	.byte 12                               ; int== 
	.byte 2,164,2,169,149,142,0            ; f>b  9578.252582
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,106,37,0,0,0,0                 ; i>b  9578
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,224,139,141,0              ; f>b  4476
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,124,17,0,0,0,0                 ; i>b  4476
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,174,214,34,220,141,1           ; f>b  -7044.354825
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,124,228,255,255,0,0            ; i>b  -7044
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,199,167,68,194,139,1           ; f>b  -1554.145481
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,238,249,255,255,0,0            ; i>b  -1554
	.byte 12                               ; int== 
	.byte 2,168,51,65,213,141,1            ; f>b  -6824.150224
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,88,229,255,255,0,0             ; i>b  -6824
	.byte 12                               ; int== 
	.byte 2,172,101,81,234,141,0           ; f>b  7498.174646
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,74,29,0,0,0,0                  ; i>b  7498
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,132,0                ; f>b  12
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,12,0,0,0,0,0                   ; i>b  12
	.byte 12                               ; int== 
	.byte 2,0,0,0,208,132,0                ; f>b  13
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,13,0,0,0,0,0                   ; i>b  13
	.byte 12                               ; int== 
	.byte 2,98,46,28,181,141,1             ; f>b  -5795.522649
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,93,233,255,255,0,0             ; i>b  -5795
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,243,168,209,211,138,1          ; f>b  -847.275937
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,177,252,255,255,0,0            ; i>b  -847
	.byte 12                               ; int== 
	.byte 2,91,120,137,200,141,0           ; f>b  6417.183769
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,17,25,0,0,0,0                  ; i>b  6417
	.byte 12                               ; int== 
	.byte 2,88,152,122,154,141,0           ; f>b  4943.324387
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,79,19,0,0,0,0                  ; i>b  4943
	.byte 12                               ; int== 
	.byte 2,0,0,164,152,142,0              ; f>b  9769
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,41,38,0,0,0,0                  ; i>b  9769
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,129,1                ; f>b  -1
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,255,255,255,255,0,0            ; i>b  -1
	.byte 12                               ; int== 
	.byte 2,228,155,133,161,136,0          ; f>b  161.52191
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,161,0,0,0,0,0                  ; i>b  161
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,152,133,0                ; f>b  19
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,19,0,0,0,0,0                   ; i>b  19
	.byte 12                               ; int== 
	.byte 2,174,116,210,185,141,1          ; f>b  -5946.306973
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,198,232,255,255,0,0            ; i>b  -5946
	.byte 12                               ; int== 
	.byte 2,216,237,249,174,140,0          ; f>b  2799.620568
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,239,10,0,0,0,0                 ; i>b  2799
	.byte 12                               ; int== 
	.byte 2,253,22,139,128,141,1           ; f>b  -4113.386226
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,239,239,255,255,0,0            ; i>b  -4113
	.byte 12                               ; int== 
	.byte 2,115,128,224,139,142,1          ; f>b  -8952.125442
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,221,255,255,0,0              ; i>b  -8952
	.byte 12                               ; int== 
	.byte 2,118,55,134,155,141,0           ; f>b  4976.777081
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,112,19,0,0,0,0                 ; i>b  4976
	.byte 12                               ; int== 
	.byte 2,0,0,40,238,141,0               ; f>b  7621
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,197,29,0,0,0,0                 ; i>b  7621
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,132,0                ; f>b  15
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,15,0,0,0,0,0                   ; i>b  15
	.byte 12                               ; int== 
	.byte 2,72,244,90,172,141,0            ; f>b  5515.369278
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,139,21,0,0,0,0                 ; i>b  5515
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,54,125,43,181,141,1            ; f>b  -5797.43614
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,91,233,255,255,0,0             ; i>b  -5797
	.byte 12                               ; int== 
	.byte 2,68,5,203,251,140,0             ; f>b  4028.688786
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,188,15,0,0,0,0                 ; i>b  4028
	.byte 12                               ; int== 
	.byte 2,254,161,73,218,140,1           ; f>b  -3492.602049
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,92,242,255,255,0,0             ; i>b  -3492
	.byte 12                               ; int== 
	.byte 2,111,70,65,194,139,0            ; f>b  1554.039848
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,18,6,0,0,0,0                   ; i>b  1554
	.byte 12                               ; int== 
	.byte 2,82,170,12,237,141,1            ; f>b  -7585.583166
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,95,226,255,255,0,0             ; i>b  -7585
	.byte 12                               ; int== 
	.byte 2,77,28,147,144,141,1            ; f>b  -4626.38882
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,238,237,255,255,0,0            ; i>b  -4626
	.byte 12                               ; int== 
	.byte 2,156,204,230,165,140,1          ; f>b  -2654.424954
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,162,245,255,255,0,0            ; i>b  -2654
	.byte 12                               ; int== 
	.byte 2,247,173,83,145,142,1           ; f>b  -9300.91989
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,172,219,255,255,0,0            ; i>b  -9300
	.byte 12                               ; int== 
	.byte 2,139,48,4,241,139,1             ; f>b  -1928.130926
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,120,248,255,255,0,0            ; i>b  -1928
	.byte 12                               ; int== 
	.byte 2,96,21,66,160,141,0             ; f>b  5128.260438
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,20,0,0,0,0                   ; i>b  5128
	.byte 12                               ; int== 
	.byte 2,227,39,80,162,140,1            ; f>b  -2597.009738
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,219,245,255,255,0,0            ; i>b  -2597
	.byte 12                               ; int== 
	.byte 2,252,42,138,251,141,1           ; f>b  -8049.27099
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,143,224,255,255,0,0            ; i>b  -8049
	.byte 12                               ; int== 
	.byte 2,136,175,123,228,140,1          ; f>b  -3655.730355
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,185,241,255,255,0,0            ; i>b  -3655
	.byte 12                               ; int== 
	.byte 2,225,84,205,137,140,1           ; f>b  -2204.833223
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,100,247,255,255,0,0            ; i>b  -2204
	.byte 12                               ; int== 
	.byte 2,0,0,240,252,141,0              ; f>b  8094
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,158,31,0,0,0,0                 ; i>b  8094
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,52,224,196,200,139,1           ; f>b  -1606.152369
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,186,249,255,255,0,0            ; i>b  -1606
	.byte 12                               ; int== 
	.byte 2,73,65,0,138,141,0              ; f>b  4416.031878
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,64,17,0,0,0,0                  ; i>b  4416
	.byte 12                               ; int== 
	.byte 2,125,211,91,139,141,1           ; f>b  -4459.478267
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,149,238,255,255,0,0            ; i>b  -4459
	.byte 12                               ; int== 
	.byte 2,203,212,34,170,137,1           ; f>b  -340.272119
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,172,254,255,255,0,0            ; i>b  -340
	.byte 12                               ; int== 
	.byte 2,13,177,59,227,139,1            ; f>b  -1817.865363
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,231,248,255,255,0,0            ; i>b  -1817
	.byte 12                               ; int== 
	.byte 2,0,0,0,136,133,1                ; f>b  -17
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,239,255,255,255,0,0            ; i>b  -17
	.byte 12                               ; int== 
	.byte 2,179,88,207,217,141,1           ; f>b  -6969.918312
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,199,228,255,255,0,0            ; i>b  -6969
	.byte 12                               ; int== 
	.byte 2,249,85,229,143,140,1           ; f>b  -2302.33349
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,247,255,255,0,0              ; i>b  -2302
	.byte 12                               ; int== 
	.byte 2,0,0,72,173,141,0               ; f>b  5545
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,169,21,0,0,0,0                 ; i>b  5545
	.byte 12                               ; int== 
	.byte 2,121,157,164,223,139,0          ; f>b  1789.144223
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,253,6,0,0,0,0                  ; i>b  1789
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,87,8,193,148,140,0             ; f>b  2380.064537
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,76,9,0,0,0,0                   ; i>b  2380
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,133,255,241,132,142,1          ; f>b  -8508.499533
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,196,222,255,255,0,0            ; i>b  -8508
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,130,0                ; f>b  2
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,2,0,0,0,0,0                    ; i>b  2
	.byte 12                               ; int== 
	.byte 2,62,7,199,235,141,1             ; f>b  -7544.878538
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,136,226,255,255,0,0            ; i>b  -7544
	.byte 12                               ; int== 
	.byte 2,29,148,140,172,140,0           ; f>b  2760.786161
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,200,10,0,0,0,0                 ; i>b  2760
	.byte 12                               ; int== 
	.byte 2,54,178,213,217,140,0           ; f>b  3485.356009
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,157,13,0,0,0,0                 ; i>b  3485
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,151,157,215,139,141,0          ; f>b  4474.95195
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,122,17,0,0,0,0                 ; i>b  4474
	.byte 12                               ; int== 
	.byte 2,224,45,255,135,139,0           ; f>b  1087.97435
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,63,4,0,0,0,0                   ; i>b  1087
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,129,0                ; f>b  1
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,1,0,0,0,0,0                    ; i>b  1
	.byte 12                               ; int== 
	.byte 2,0,0,0,192,130,0                ; f>b  3
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,3,0,0,0,0,0                    ; i>b  3
	.byte 12                               ; int== 
	.byte 2,189,152,251,233,141,0          ; f>b  7487.44958
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,63,29,0,0,0,0                  ; i>b  7487
	.byte 12                               ; int== 
	.byte 2,208,7,27,227,141,0             ; f>b  7267.378816
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,99,28,0,0,0,0                  ; i>b  7267
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,73,166,207,144,141,0           ; f>b  4633.956194
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,25,18,0,0,0,0                  ; i>b  4633
	.byte 12                               ; int== 
	.byte 2,0,0,0,240,132,1                ; f>b  -15
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,241,255,255,255,0,0            ; i>b  -15
	.byte 12                               ; int== 
	.byte 2,143,217,229,173,141,0          ; f>b  5564.73123
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,188,21,0,0,0,0                 ; i>b  5564
	.byte 12                               ; int== 
	.byte 2,115,80,204,193,141,1           ; f>b  -6201.539282
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,199,231,255,255,0,0            ; i>b  -6201
	.byte 12                               ; int== 
	.byte 2,0,0,152,192,141,1              ; f>b  -6163
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,237,231,255,255,0,0            ; i>b  -6163
	.byte 12                               ; int== 
	.byte 2,253,3,189,188,141,1            ; f>b  -6039.626948
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,105,232,255,255,0,0            ; i>b  -6039
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,182,3,62,235,139,1             ; f>b  -1881.937953
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,167,248,255,255,0,0            ; i>b  -1881
	.byte 12                               ; int== 
	.byte 2,86,176,98,183,141,1            ; f>b  -5868.336102
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,20,233,255,255,0,0             ; i>b  -5868
	.byte 12                               ; int== 
	.byte 2,8,34,92,225,141,0              ; f>b  7211.516617
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,43,28,0,0,0,0                  ; i>b  7211
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,133,0                ; f>b  16
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,16,0,0,0,0,0                   ; i>b  16
	.byte 12                               ; int== 
	.byte 2,231,10,120,183,141,0           ; f>b  5871.005324
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,239,22,0,0,0,0                 ; i>b  5871
	.byte 12                               ; int== 
	.byte 2,0,0,0,152,133,1                ; f>b  -19
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,237,255,255,255,0,0            ; i>b  -19
	.byte 12                               ; int== 
	.byte 2,218,218,197,150,140,0          ; f>b  2412.365931
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,108,9,0,0,0,0                  ; i>b  2412
	.byte 12                               ; int== 
	.byte 2,169,173,87,216,141,1           ; f>b  -6922.959795
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,246,228,255,255,0,0            ; i>b  -6922
	.byte 12                               ; int== 
	.byte 2,0,0,0,0,0,0                    ; f>b  0
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,0,0,0,0,0,0                    ; i>b  0
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,132,0                ; f>b  8
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,8,0,0,0,0,0                    ; i>b  8
	.byte 12                               ; int== 
	.byte 2,229,54,170,155,142,1           ; f>b  -9962.553609
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,22,217,255,255,0,0             ; i>b  -9962
	.byte 12                               ; int== 
	.byte 2,106,168,201,144,142,0          ; f>b  9266.414469
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,50,36,0,0,0,0                  ; i>b  9266
	.byte 12                               ; int== 
	.byte 2,5,47,30,149,138,1              ; f>b  -596.47162
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,172,253,255,255,0,0            ; i>b  -596
	.byte 12                               ; int== 
	.byte 2,83,10,7,211,141,1              ; f>b  -6752.880042
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,160,229,255,255,0,0            ; i>b  -6752
	.byte 12                               ; int== 
	.byte 2,0,0,0,128,133,1                ; f>b  -16
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,240,255,255,255,0,0            ; i>b  -16
	.byte 12                               ; int== 
	.byte 2,105,233,179,230,141,0          ; f>b  7382.48897
	.byte 15                               ; b>a  
	.byte 10                               ; ftoi 
	.byte 1,214,28,0,0,0,0                 ; i>b  7382
	.byte 12                               ; int== 
	.byte 16                               ; halt 

