# How to run: mingw32-make.exe run
all: FahrCel.exe

run: FahrCel.exe
	./FahrCel.exe

FahrCel.exe: FahrCel.o Conversion.o
	gcc FahrCel.o Conversion.o -o FahrCel.exe

FahrCel.o: FahrCel.c Conversion.h
	gcc -c FahrCel.c -std=c18 -o FahrCel.o

Conversion.o: Conversion.h Conversion.c
	gcc -c Conversion.c -std=c18 -o Conversion.o

clean: 
	del FahrCel.o
	del Conversion.o
	del FahrCel.exe