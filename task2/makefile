all: charFuncs

charFuncs: charFuncs.o 
	gcc -g -m32 -Wall -o charFuncs charFuncs.o

charFuncs.o : task2.c
	gcc -g -Wall -m32  -c -o charFuncs.o  task2.c
	
.PHONY: clean

clean: 
	rm -f *.o charFuncs

