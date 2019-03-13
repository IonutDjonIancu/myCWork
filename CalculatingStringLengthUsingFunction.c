#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// strings passed to functions

int MyStringLen(char *str) {	// calculating the actual length of a string
	int counter = 0;

	while (*str != '\0') {	// the condition is not to count the nulbyte char
		counter++;			// returning only the length of actual chars seen on Output
		str++;				// library function int strlen(char *str) looks more or less 
	}						// the same

	return counter;
}


int main(void) {
	
	char myString[10] = "Boxie";
	printf("%d\n", MyStringLen(myString));




	_getch();
	return 0;
}