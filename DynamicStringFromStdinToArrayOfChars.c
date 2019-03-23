#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

int main(int argc, char *argv[]) {

	char *str;
	str = (char*)malloc(9);

	fgets(str, 9, stdin);
	char *newStr;
	newStr = (char*)malloc(strlen(str));
	
	printf("%d\n", strlen(newStr)); // will print the original size from the str pointer
	strcpy(newStr, str);
	printf("%d\n", strlen(newStr)); // will pe truncated to the length of the stdin string

	free(str); // original ptr will be destroyed and memory freed
	str = NULL;

	puts(newStr); // final memory used strlen of string + nulbyte

	_getch();
	return 0;
}


