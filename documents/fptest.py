# *******************************************************************************************
# *******************************************************************************************
#
#		Name : 		fptest.py
#		Purpose :	Floating point routines, testing.
#		Date :		1st July 2019
#		Author : 	Paul Robson (paul@robsons.org.uk)
#
# *******************************************************************************************
# *******************************************************************************************

from fpnumber import *
import random

def getFP():
	if random.randint(0,10) == 0:
		return random.randint(1,200)
	return random.randint(1,1000*1000*1000) / 100000	

def isBad(n1,n2):
	while n1 > 1 and n2 > 1:
		n1 = n1 / 10
		n2 = n2 / 10
	diff = abs(n1-n2)	
	return diff > 0.000001

testCount = 1000*1000
random.seed()
seed = random.randint(0,999999)
print("Seed ",seed)
random.seed(seed)

for i in range(0,testCount):
	if i % 10000 == 0:
		print("Done ",i)
	n1 = getFP()
	n2 = getFP()
	#
	#		Test addition.
	#
	f1 = FloatingPoint(n1)
	f2 = FloatingPoint(n2)
	f1.add(f2)
	if isBad(n1+n2,f1.getFloat()):
		print(i,n1,"+",n2,n1+n2,f1.getFloat())
	#
	#		Test subtraction (+ve results only)
	#
	f1 = FloatingPoint(n1)
	f2 = FloatingPoint(n2)
	if n1 > n2:
		f1.sub(f2)
		if isBad(n1-n2,f1.getFloat()):
			print(i,n1,"-",n2,n1-n2,f1.getFloat())
	#
	#		Test multiplication.
	#
	f1 = FloatingPoint(n1)
	f2 = FloatingPoint(n2)	
	f1.mul(f2)
	if isBad(n1*n2,f1.getFloat()):
		print(i,n1,"*",n2,"=",n1*n2," not ",f1.getFloat())
	#
	#		Test division.
	#
	f1 = FloatingPoint(n1)
	f2 = FloatingPoint(n2)	
	f1.div(f2)
	if isBad(n1/n2,f1.getFloat()):
		print(i,n1,"/",n2,"=",n1*n2," not ",f1.getFloat())
	#print(i,n1,n2,f1.getFloat())
	#
	#		Float to Integer conversion.
	#
	f1 = FloatingPoint(n1)
	i1 = f1.toInteger()
	if isBad(int(n1),i1):
		print(i,"int({0}) = {1}".format(n1,i1))
	#
	#		Integer to float conversion.
	#
	n = int(n1)
	if n > 0:
		f1 = FloatingPoint(1)
		f1.fromInteger(n)
		if n != int(f1.getFloat()):
			print(i,"toFloat({0}) = {1}".format(n,f1.getFloat()))
	#
	#		Extract integer part.
	#
	f1 = FloatingPoint(n1)
	f1.integerPart()
	if f1.getFloat() != int(n1):
		print(i,"intPart({0}) = {1}".format(n1,f1.getFloat()))
		print(f1.toInteger())
	#
	#		Extract fractional part.
	#
	f1 = FloatingPoint(n1)
	f1.fractionalPart()
	diff = abs((n1 - int(n1))-f1.getFloat())
	if diff > 0.00001:
		print(i,"floatPart({0}) = {1}".format(n1,f1.getFloat()))
	#
	#		String -> Float
	#
	f1 = FloatingPoint(1)
	f1.fromString(str(n1))
	if isBad(n1,f1.getFloat()):
		print(i,"val({0}) = {1}".format(str(n1),f1.getFloat()))
	#
	#		Float -> String
	#
	f1 = FloatingPoint(n1)
	s = f1.toString()
	if isBad(n1,float(s)):
		print(i,"str({0}) = \"{1}\"".format(n1,s))
