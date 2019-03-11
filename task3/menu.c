#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char encrypt(char c){
	if((c>=0x20) & (c<=0x7E))
		return c+3;
	return c;
}
char decrypt(char c){
	if((c>=0x20) & (c<=0x7E))
		return c-3;
	return c;
}
char xprt(char c) {
	printf("%#02X\n", c);
	return c;
}
char cprt(char c) {
	if((c>=0x20) & (c<=0x7E))
		printf("%c\n", c);
	else	
		printf("%c\n", '.');
	return c;
}
char my_get(char c){
	return fgetc(stdin);
}
char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}

char quit(char c){
	exit(0);
}

char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  int i;
  for(i=0; i<array_length; i++){
  	mapped_array[i] = f(array[i]);
  }
  return mapped_array;
}

struct fun_desc 
{
	char *name;
	char (*f) (char);
};
 
int main(int argc, char **argv){
	char* carray = (char*)(malloc(5*sizeof(char)));
	char (*f_ptr)(char) func_array ={&encrypt, &decrypt, &cprt,} 
	quit('v');
}