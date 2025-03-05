
all: main

clean: main main.o array.o
	rm -f main main.o array.o


main: main.o array.o
	gcc main.o array.o -o main


main.o: main.c array.h
	gcc -c main.c -o main.o


array.o: array.c array.h
	gcc -c array.c -o array.o
