all: LinkedList.o
	gcc LinkedList.o
	./a.out
	rm *.o
LinkedList.o:
	gcc -c LinkedList.c LinkedList.h
