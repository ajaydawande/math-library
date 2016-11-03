all: project
project: mymaths.o main.o
	gcc mymaths.o main.o -o project
mymaths.o: mymaths.h mymaths.c
	gcc -c mymaths.c
main.o: mymaths.h main.c
	gcc -c main.c
clean:
	rm project *.o
