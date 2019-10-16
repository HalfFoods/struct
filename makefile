all: main.o candidates.o
	gcc -o program main.o candidates.o

functions.o: candidates.c candidates.h
	gcc -c candidates.c

main.o: main.c candidates.h
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm program
