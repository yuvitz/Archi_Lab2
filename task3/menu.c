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
	char empty_arr[]="";
	char* carray = empty_arr;
	int i;
	int size, chosen;
	char opt;
	struct fun_desc func_array[] ={
	{"Censor", censor},
	{"Encrypt", encrypt}, 
	{"Decrypt", decrypt}, 
	{"Print hex", xprt}, 
	{"Print string", cprt}, 
	{"Get string", my_get}, 
	{"Quit", quit},
	{NULL, NULL}};
	size=sizeof(func_array)/sizeof(*func_array)-1;

	while(1){
		printf("%s\n", "Please choose a function");
		for(i=0; i<size; i++){
			printf("%d", i);
			printf(") %s\n", func_array[i].name);
		}
		opt=fgetc(stdin);
		chosen= opt-'0';
		printf("%s", "Option: ");
		printf("%c\n", opt);
		if((chosen>=0) & (chosen <=6))
			printf("%s\n", "Within bounds");
		else
			printf("%s\n", "Not within bounds");

		char* new_arr=map(carray, size, func_array[chosen].f);
		carray=new_arr;	
		free(new_arr);
	}
}	
