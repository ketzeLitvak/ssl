# How to run: mingw32-make.exe run
all: TablasDeConversion.exe

run: TablasDeConversion.exe
	./TablasDeConversion.exe

test: ConversionTest.exe
	./ConversionTest.exe

TablasDeConversion.exe: TablasDeConversion.o Conversion.o
	gcc TablasDeConversion.o Conversion.o -o TablasDeConversion.exe

ConversionTest.exe: ConversionTest.o Conversion.o
	gcc ConversionTest.o Conversion.o -o ConversionTest.exe

ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c -std=c18 -o ConversionTest.o

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c -std=c18 -o TablasDeConversion.o

Conversion.o: Conversion.h Conversion.c
	gcc -c Conversion.c -std=c18 -o Conversion.o

clean: 
	del TablasDeConversion.o
	del Conversion.o
	del ConversionTest.o
	del TablasDeConversion.exe
	del ConversionTest.exe