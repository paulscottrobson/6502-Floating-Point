#
#		Simple test script.
#
#python ../documents/fptc.py
python ../documents/testgen.py
64tass -a -b -c test.asm -o test.bin -L test.lst
../emulator/6502em test.bin go





