# How to run: mingw32-make.exe run
all: makefile.exe

run: makefile.exe
	./makefile.exe

makefile.exe: makefile.o
	gcc makefile.o -o makefile.exe

makefile.o: makefile.c
	gcc -c makefile.c -std=c18 -o makefile.o

clean: 
	del makefile.o
	del makefile.exe