all: count

count: count.o 
	gcc -g -m32 -Wall -o count count.o

count.o : count-words.c
	gcc -g -Wall -m32  -c -o count.o  count-words.c
	
.PHONY: clean

clean: 
	rm -f *.o count

