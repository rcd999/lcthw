#include <stdio.h>
#include <string.h>

#define END '\0'

int main(int argc, char *argv[]){

	char charArray[4]={'a','b','c',END};
	int fourByteInt=1234;
	printf("%s\n",charArray);
	printf("%d\n",fourByteInt);
	printf("%s\n",(char *) memcpy(&fourByteInt,charArray,strlen(charArray)+1));	
	printf("%s<<This is the value in memory for fourByteInt after the memcpy. The variable is declared as int, but the value in that chunk of memory is a string.\n",(char *) &fourByteInt);
	printf("%ld",strlen(charArray));
	return 0;
}

