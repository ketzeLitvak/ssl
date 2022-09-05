# Variables
CC = gcc
CFlags = -Wall -Wextra -std=c18

ifdef OS
   RM = del
else
   ifeq ($(shell uname), Linux)
      RM = rm -f
   endif
endif

# How to run: mingw32-make.exe run
all: calculadoraPolaca.exe

run: calculadoraPolaca.exe
	./calculadoraPolaca.exe

calculadoraPolaca.exe: calculadoraPolaca.o scanner.o stack.o
	$(CC) calculadoraPolaca.o scanner.o stack.o -o calculadoraPolaca.exe

calculadoraPolaca.o: calculadoraPolaca.c scanner.h stack.h
	$(CC) $(CFlags) -c calculadoraPolaca.c  

scanner.o: scanner.c scanner.h
	$(CC) $(CFlags) -c scanner.c -std=c18 

stack.o: stack.c stack.h
	$(CC) $(CFlags) -c stack.c -std=c18 

clean:
	$(RM) stack.o
	$(RM) scanner.o
	$(RM) calculadoraPolaca.o
	$(RM) calculadoraPolaca.exe