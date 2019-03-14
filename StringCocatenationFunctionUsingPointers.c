#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// string concatenate function using pointers

// destination string should be the second argument

char *MyStringConcat(char *source, char *destination) {
	char *res = destination;

	for (res = destination; *destination++;) {
	}
	for (--destination; *destination++ = *source++;) {
	}
	

	return res;
}


int main(void) {

	char str1[10] = "conca";
	char str2[10] = "tenated";
	
	puts(str1);

	MyStringConcat(str2, str1);

	puts(str1);


	_getch();
	return 0;
}