# *******************************************************************************************
# *******************************************************************************************
#
#		Name : 		addtest.py
#		Purpose :	Routine to add 2 signed fp's can be used for add/subtract
#		Date :		1st July 2019
#		Author : 	Paul Robson (paul@robsons.org.uk)
#
# *******************************************************************************************
# *******************************************************************************************

from fpnumber import *
import random

class SignedFloatingPoint(FloatingPoint):
	#
	def setFloat(self,value):
		FloatingPoint.setFloat(self,abs(value))
		self.isMinus = value < 0
	def getFloat(self):
		n = FloatingPoint.getFloat(self)
		return -n if self.isMinus else n 

	# ************************************************************************************		
	#
	#					addSigned 2 Floating points that may be signed
	#
	# ************************************************************************************		

	def addSigned(self,fp2):
		if fp2.exponent == 0:											# 2nd is zero. exit.
			return 
		#
		if self.exponent == 0:											# 1st is zero. use 2nd
			self.exponent = fp2.exponent
			self.mantissa = fp2.mantissa
			self.isMinus = fp2.isMinus
			return
		#
		self.alignExponents(fp2) 										# align exponents.
		#
		#		Signs the same.
		#
		if self.isMinus == fp2.isMinus:									# if signs the same.
			self.mantissa = self.mantissa + fp2.mantissa 				# addSigned the mantissas together.
			#
			if self.mantissa > self.bitMask:							# no overflow (e.g. one is zero)
				self.exponent += 1 										# increment exponent 
				assert self.exponent < 256 								# out of range error
				self.mantissa = (self.mantissa >> 1)					# halve the mantissa.
				# keep the same sign as the original value.
		#
		#		Signs different.
		#
		else:
			self.mantissa = self.mantissa - fp2.mantissa 				# answer if f1>f2
			if self.mantissa == 0:										# handle zero.
				self.exponent = 0
			if self.mantissa < 0:										# handle other sign.
				self.mantissa = - self.mantissa
				self.isMinus = fp2.isMinus

def getFP():
	if random.randint(0,5) == 0:
		n = random.randint(1,50) if random.randint(0,3) > 0 else 0
	else:
		n = random.randint(1,1000*1000*1000) / 100000	
	return n if random.randint(0,1) == 0 else -n 

def isBad(n1,n2):
	while n1 > 1 and n2 > 1:
		n1 = n1 / 10
		n2 = n2 / 10
	diff = abs(n1-n2)	
	return diff > 0.0001

random.seed()
seed = random.randint(0,999999)
print("Seed ",seed)
random.seed(seed)

for i in range(0,1000*1000):
	n1 = getFP()
	n2 = getFP()
	answer = n1 + n2
	fp1 = SignedFloatingPoint(n1)
	fp2 = SignedFloatingPoint(n2)
	fp1.addSigned(fp2)
	if isBad(answer,fp1.getFloat()):
		print(i,n1,n2,answer,fp1.getFloat())
