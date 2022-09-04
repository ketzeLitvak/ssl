# How to run: mingw32-make.exe run
all: calculadoraPolaca.exe

run: calculadoraPolaca.exe
	./calculadoraPolaca.exe

calculadoraPolaca.exe: calculadoraPolaca.o scanner.o stack.o
	gcc calculadoraPolaca.o scanner.o stack.o -o calculadoraPolaca.exe

calculadoraPolaca.o: calculadoraPolaca.c
	gcc -c calculadoraPolaca.c -std=c18 -o calculadoraPolaca.o

scanner.o: scanner.c
	gcc -c scanner.c -std=c18 -o scanner.o

stack.o: stack.c
	gcc -c stack.c -std=c18 -o stack.o

clean: 
	del stack.o
	del scanner.o
	del calculadoraPolaca.o
	del calculadoraPolaca.exe