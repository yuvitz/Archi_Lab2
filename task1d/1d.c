#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (int argc, char** argv){
	int iarray[] = {1,2,3};
	char carray[] = {'a','b','c'};
	int* iarrayPtr;
	char* carrayPtr;
	int* p;
	iarrayPtr=&iarray[0];
	carrayPtr=&carray[0];
	int i;
	for (i = 0; i < sizeof(iarray)/sizeof(iarray[0]); ++i)
		printf("%d\n", iarrayPtr[i]);
	for (i = 0; i < sizeof(carray)/sizeof(carray[0]); ++i)
		printf("%c\n", carrayPtr[i]);
	printf("%p\n", p);

}