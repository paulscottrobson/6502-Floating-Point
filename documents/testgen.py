# *******************************************************************************************
# *******************************************************************************************
#
#		Name : 		testgen.py
#		Purpose :	Floating Point test generator.
#		Date :		2nd July 2019
#		Author : 	Paul Robson (paul@robsons.org.uk)
#
# *******************************************************************************************
# *******************************************************************************************

from fptc import *
import random

def getFP():
	if random.randint(0,5) == 0:
		return 0
	if random.randint(0,5) == 0:
		return random.randint(-20,20)
	return random.randint(0,100000000) / 100000.0

if __name__ == "__main__":
	cc = Compiler()
	random.seed()
	seed = random.randint(0,999999)
	random.seed(seed)
	print("Seed ",seed)
	code = []
	for i in range(0,600):
		f1 = getFP()
		f2 = getFP()
		code.append(" f>b {0} b>a f>b {1} + f>b {2} - =0".format(f1,f2,f1+f2) )
		f1 = getFP()
		f2 = getFP()
		code.append(" f>b {0} b>a f>b {1} - f>b {2} - =0".format(f1,f2,f1-f2) )
		f1 = getFP()
		f2 = getFP()
		code.append(" f>b {0} b>a f>b {1} * f>b {2} - =0".format(f1,f2,f1*f2) )
#		print(code[-1])
	h = open("code.inc","w")
	h.write("\n".join(cc.compile(code)))
	h.write("\n\n")
	h.close()


