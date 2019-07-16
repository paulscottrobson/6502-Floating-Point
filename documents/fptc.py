# *******************************************************************************************
# *******************************************************************************************
#
#		Name : 		fptc.py
#		Purpose :	Floating Point test code asse,b;er
#		Date :		2nd July 2019
#		Author : 	Paul Robson (paul@robsons.org.uk)
#
# *******************************************************************************************
# *******************************************************************************************

from fpnumber import *

class Compiler(object):
	def __init__(self):
		self.commands = { } 

		self.commands["i>b"] = { "name":"i>b" }		# place int const in fpb
		self.commands["i>b"]["operand"] = "int" 	# followed by signed 32 bit integer,0,0

		self.commands["f>b"] = { "name":"f>b" }		# place float in fpb
		self.commands["f>b"]["operand"] = "float"	# followed by mantissa (hi bit set),exp,sign

		self.commands["+"] = { "name":"+" }			# add fpb to fpa
		self.commands["-"] = { "name":"-" }			# sub fpb to fpa
		self.commands["*"] = { "name":"*" }			# mul fpa by fpb
		self.commands["/"] = { "name":"/" }			# divide fpa by fpb

		self.commands["int"] = { "name":"int" }		# place int(fpa) in fpa
		self.commands["frac"] = { "name":"frac" }	# place frac(fpa) in fpa

		self.commands["itof"] = { "name":"itof" }	# convert fpb:int -> float
		self.commands["ftoi"] = { "name":"ftoi" }	# convert fpb:float -> int

		self.commands["=0"] = { "name":"=0"}		# true if fpa nearly equal to 0
		self.commands["int=="] = { "name":"int==" }	# true if int(a) = int(b)

		self.commands["a>$"] = { "name":"a>$" }		# copy a to buffer as string constant
		self.commands["$>a"] = { "name":"$>a"}		# copy string constant to a as float.

		self.commands["b>a"] = { "name": "b>a" }	# copy B to A
		self.commands["halt"] = { "name":"halt" }	# stop program.

		k = [x for x in self.commands.keys()]		# fill in the gaps.
		for kn in range(0,len(k)):
			key = k[kn]
			if "operand" not in self.commands[key]:
				self.commands[key]["operand"] = None
			self.commands[key]["command"] = kn+1

	def compile(self,text):
		text = [x if x.find(";") < 0 else x[:x.find(";")] for x in text]
		text = [x.strip().lower() for x in " ".join(text).split(" ") if x.strip() != ""]
		text.append("halt")
		src = []
		self.size = 0

		for c in self.commands.keys():
			name = self.commands[c]["name"].replace(">","_to_").replace("==","exact")
			name = name.replace("=","equal").replace("$","buffer")
			name = name.replace("+","add").replace("-","sub").replace("*","mul").replace("/","div")
			src.append("cmd_{0} = {1}".format(name,self.commands[c]["command"]))
		#
		src.append("\n\nFPCode:")
		#
		while len(text) != 0:
			byte = []			
			assert text[0] in self.commands,"Don't know {0}".format(text[0])
			cmd = self.commands[text[0]]
			opcode = ""
			byte.append(cmd["command"])
			text = text[1:]
			if cmd["operand"] is not None:
				opcode = text[0]
				if cmd["operand"] == "int":
					mantissa = int(text[0])
					exponent = 0
					sign = 0
					text = text[1:]
				else:
					n = float(text[0])
					fp = FloatingPoint(abs(n))					
					sign = 0 if n >= 0 else 1
					mantissa = fp.mantissa
					exponent = fp.exponent
					text = text[1:]

				mantissa &= 0xFFFFFFFF
				byte.append(mantissa & 0xFF)
				byte.append((mantissa >> 8) & 0xFF)
				byte.append((mantissa >> 16) & 0xFF)
				byte.append((mantissa >> 24) & 0xFF)
				byte.append(exponent)
				byte.append(sign)
			bl = ",".join([str(x) for x in byte])
			src.append("\t.byte {0:32} ; {1:4} {2}".format(bl,cmd["name"],opcode))
			self.size += len(byte)
		print("Compiled {0} bytes.".format(self.size))
		return src

if __name__ == "__main__":
	txt = """
	;
	;		Test compiler 
	;
	f>b  421.4  b>a
	f>b  -10 /
	f>b  -42.14 - =0		

	""".split("\n")
	cc = Compiler()
	h = open("code.inc","w")
	h.write("\n".join(cc.compile(txt)))
	h.write("\n\n")
	h.close()
