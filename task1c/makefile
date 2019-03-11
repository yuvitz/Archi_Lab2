all: array_addresses

array_addresses: array_addresses.o 
	gcc -g -m32 -Wall -o array_addresses array_addresses.o

array_addresses.o : 1c.c
	gcc -g -Wall -m32  -c -o array_addresses.o  1c.c
	
.PHONY: clean

clean: 
	rm -f *.o array_addresses

