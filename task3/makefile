all: menu

menu: menu.o 
	gcc -g -m32 -Wall -o menu menu.o

menu.o : menu.c
	gcc -g -Wall -m32  -c -o menu.o  menu.c
	
.PHONY: clean

clean: 
	rm -f *.o menu

