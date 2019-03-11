all: print_arrays

print_arrays: print_arrays.o 
	gcc -g -m32 -Wall -o print_arrays print_arrays.o

print_arrays.o : 1d.c
	gcc -g -Wall -m32  -c -o print_arrays.o  1d.c
	
.PHONY: clean

clean: 
	rm -f *.o print_arrays