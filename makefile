all: main.o functions.o headers.h
	gcc -o program main.o functions.o headers.h

main.o: main.c headers.h 
	gcc -c main.c

functions.o: functions.c headers.h
	gcc -c functions.c
