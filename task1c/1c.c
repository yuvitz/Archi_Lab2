#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int iarray[3];
	float farray[3];
	double darray[3];
	char carray[3];
	fprintf(stderr, "%p\n", &(iarray));
	fprintf(stderr, "%p\n", &(iarray)+1);
	fprintf(stderr, "%p\n", &(farray));
	fprintf(stderr, "%p\n", &(farray)+1);
	fprintf(stderr, "%p\n", &(darray));
	fprintf(stderr, "%p\n", &(darray)+1);
	fprintf(stderr, "%p\n", &(carray));
	fprintf(stderr, "%p\n", &(carray)+1);
}
