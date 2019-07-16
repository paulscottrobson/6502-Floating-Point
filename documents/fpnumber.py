# *******************************************************************************************
# *******************************************************************************************
#
#		Name : 		fpnumber.py
#		Purpose :	Floating point routines, that can be converted to 6502 assembler.
#		Date :		1st July 2019
#		Author : 	Paul Robson (paul@robsons.org.uk)
#
# *******************************************************************************************
# *******************************************************************************************

# *******************************************************************************************
#	
#					Algorithms for non-zero positive floating points
#
# *******************************************************************************************

class FloatingPoint(object):
	def __init__(self,value,bias = 129,bits=32):
		self.bias = bias 									# bias for this operation
		self.bitCount = bits 								# bit size.
		self.bitMask = int(pow(2,bits)-1) 					# useful constants
		self.signBit = 1 << (bits-1)
		self.setFloat(value) 								# set it in Python.
	#
	#		Convert python float to 40 bit float.
	#
	def setFloat(self,value):
		assert value >= 0.0									# check a legal value.
		self.originalValue = value 							# what it should be.
		if value == 0: 										# if zero.
			self.exponent = 0
			self.mantissa = 0
			return
		self.mantissa = int(value)							# mantissa = value
		self.exponent = self.bias + self.bitCount - 1		# exponent = bias + bits - 1
		while self.mantissa > 0xFFFFFFFF:
			self.mantissa = self.mantissa >> 1
			self.exponent = self.exponent+1
		self.normalize()									# normalize it.
		self.mantissa = int(self.mantissa) 					# round up and make integer.
	#
	#		Convert 40 bit float to python float.
	#
	def getFloat(self):
		if self.exponent == 0:
			return 0.0
		return pow(2,self.exponent - (self.bitCount-1) - self.bias)*self.mantissa 
	#
	#		Accessors
	#
	def getMantissa(self):
		return self.mantissa
	def getExponent(self):
		return self.exponent
	def state(self):
		r = int(self.getFloat()*10000+0.5)/10000.0
		return ("{0}   ${1:02x} ${2:x}".format(r,self.getExponent(),self.getMantissa()))

	# ************************************************************************************		
	#
	#									Floating point Add 
	#
	# ************************************************************************************	

	def add(self,fp2):
		#
		self.alignExponents(fp2)							# align the exponents.
		#
		self.mantissa = self.mantissa + fp2.mantissa 		# add the mantissas together.
		#
		if self.mantissa > self.bitMask:					# no overflow (e.g. one is zero)
			self.exponent += 1 								# increment exponent 
			assert self.exponent < 256 						# out of range error
			self.mantissa = (self.mantissa >> 1)			# halve the mantissa.

	# ************************************************************************************		
	#
	#								  Floating point Subtract
	#
	# ************************************************************************************	

	def sub(self,fp2):
		#
		self.alignExponents(fp2)							# align the exponents.
		#
		assert self.mantissa != fp2.mantissa				# if the same, then return 0.
		#
		if self.mantissa > fp2.mantissa: 					# check which is larger
			self.mantissa = (self.mantissa - fp2.mantissa)	# do the subtraction
		else:
			assert False,"do it the other way round, and negate the result"

	# ************************************************************************************	
	#
	#								Floating point Multiply
	#
	# ************************************************************************************	

	def mul(self,fp2):
		self.normalize()									# Normalize
		fp2.normalize()
		#
		self.exponent = self.exponent+fp2.exponent-self.bias# exponent of the result, to start
		assert self.exponent < 255 							# overflow.
		#
		productLeft = 0 									# these can be done in situ.
		productRight = self.mantissa
		multiplicand = fp2.mantissa
		for i in range(0,self.bitCount):					# add multiplicand if LSB != 0
			if (productRight & 1) != 0:
				productLeft = productLeft + multiplicand 	# keep the carry which is shifted in
			if (i != self.bitCount-1):						# don't do the last one.
				productRight = (productRight >> 1) | ((productLeft & 1) << (self.bitCount-1))
				productLeft = productLeft >> 1

		self.mantissa = productLeft 						# upper THIRTY THREE bits.
		if self.mantissa > self.bitMask:					# if there's a carry from last add
			self.mantissa = self.mantissa >> 1				# normalise down one.
			self.exponent += 1
		#
		self.normalize()									# normal up normalise.

	# ************************************************************************************	
	#
	#								Floating point Divide
	#
	# ************************************************************************************	

	def div(self,fp2):
		self.normalize()									# Normalize
		fp2.normalize()
		self.exponent = self.exponent - fp2.exponent + self.bias + 1	# new exponent
		result = 0
		for i in range(0,self.bitCount-1): 				
			#print("{0:x} {1:x} {2:x}".format(self.mantissa,fp2.mantissa,result))
			if self.mantissa >= fp2.mantissa:				# subtraction possible ? 
				self.mantissa = self.mantissa-fp2.mantissa 	# do it, set the result bit.
				result |= self.signBit 		
			fp2.mantissa = fp2.mantissa >> 1
															# straight 32 bit rotate.
			result = ((result << 1) & self.bitMask) | ((result >> (self.bitCount-1)) & 1)

		self.mantissa = result + 1 							# rounding up here gives better results
		self.normalize()									# normal up normalise.

	# ************************************************************************************	
	#
	#									Convert to Integer
	#
	# ************************************************************************************	

	def toInteger(self):
		rightShift = (self.bias+self.bitCount-1) - self.exponent # how many shifts ?
		if rightShift >= self.bitCount:						# if too many, return zero.		
			return 0
		assert rightShift >= 0								# can't int conv this.
		result = self.mantissa
		while rightShift > 0: 								# shift that many times.
			result = result >> 1
			rightShift -= 1
		return result

	# ************************************************************************************	
	#
	#									Convert from Integer
	#
	# ************************************************************************************	

	def fromInteger(self,n):
		self.exponent = self.bias + self.bitCount - 1		# set it up at 2^0
		self.mantissa = n		

	# ************************************************************************************	
	#
	#								Work out the integer part.
	#
	# ************************************************************************************	

	def integerPart(self):
		rightShift = (self.bias+self.bitCount-1) - self.exponent # how many shifts ?
		if rightShift >= self.bitCount:						# if too many, set to zero.
			self.exponent = 0
			return
		assert rightShift >= 0								# can't int conv this.
		mask = 0xFFFFFFFF >> (self.bitCount-rightShift) 	# the mask of the frac part
		mask = mask ^ 0xFFFFFFFF 							# now mask of the int parts
		self.mantissa = self.mantissa & mask 				# clear all the frac parts
		self.normalize()

	# ************************************************************************************	
	#
	#								Work out the fractional part
	#
	# ************************************************************************************	

	def fractionalPart(self):
		rightShift = (self.bias+self.bitCount-1) - self.exponent # how many shifts ?
		if rightShift < self.bitCount:						# if not too many
			assert rightShift >= 0							# can't int conv this.
			self.mask = 0xFFFFFFFF >> (self.bitCount-rightShift)# the mask of the frac part
			self.mantissa = self.mantissa & self.mask 		# clear all the int parts
		self.normalize()

	# ************************************************************************************	
	#
	#								Floating Point => String
	#
	# ************************************************************************************	

	def toString(self):
		fp10 = FloatingPoint(10.0)
		s1 = str(self.toInteger())							# int bit first
		self.fractionalPart()								# get fractional part.
		if self.mantissa != 0:
			s1 += "."
		while self.mantissa != 0:
			self.mul(fp10)
			s1 = s1 + str(self.toInteger())
			self.fractionalPart()
		return s1

	# ************************************************************************************	
	#
	#								String => Floating Point
	#
	# ************************************************************************************	

	def fromString(self,s):
		self.mantissa = 0 
		self.exponent = self.bias + self.bitCount - 1 		# 0 integer
		decimals = 0
		for c in s:
			if c >= '0' and c <= '9':						# digit 0-9
				self.mantissa = self.mantissa * 10
				self.mantissa = self.mantissa + int(c)
				if decimals > 0:							# count anything after DP
					decimals = decimals * 10 				# as changing the divider.
			elif c == '.':									# decimal point ?
				assert decimals == 0 						# two DPs.
				decimals = 1 								# needs scale for decimals now.
			else:
				assert False
		#
		if self.mantissa == 0:								# zero case
			self.exponent = 0
			return
		self.normalize()									# normalise the number

		if decimals > 1:									# division required ?
			fpDivide = FloatingPoint(1)						# create the divisor
			fpDivide.fromInteger(decimals)
			fpDivide.normalize()
			self.div(fpDivide)								# and do it.

	# ************************************************************************************	
	#
	#						Shift the exponents/mantissas till equal
	#
	# ************************************************************************************	

	def alignExponents(self,fp2):
		self.normalize()									# normalize them first.
		fp2.normalize() 									# and the second.
		#
		while fp2.exponent != self.exponent: 				# align exponents
			if (self.exponent < fp2.exponent): 				# increase exponent of smaller
				self.exponent = self.exponent + 1 			# towards the larger.
				self.mantissa = self.mantissa >> 1 			# losing precision.
			else:
				fp2.exponent = fp2.exponent + 1
				fp2.mantissa = fp2.mantissa >> 1

	# ************************************************************************************	
	#
	#							Normalize the floating point value.
	#
	# ************************************************************************************	

	def normalize(self):
		if self.mantissa == 0:
			self.exponent = 0
			return

		while (int(self.mantissa) & self.signBit) == 0: 	# double until normalised.
			self.mantissa = self.mantissa * 2
			self.exponent -= 1

if __name__ == "__main__":
	print("==================")
	fp = FloatingPoint(237497)
	print(fp.state())
	fp2 = FloatingPoint(51785)	
	print(fp2.state())
	#
	fp.mul(fp2)
	print(fp.state())
	print(237497*51785)
	fp = FloatingPoint(12298782144)
	print(fp.state())