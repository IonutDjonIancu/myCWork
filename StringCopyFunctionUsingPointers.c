#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// string copy function using pointers

// destination string should be the second argument
char *myStrcpy(char *source, char *destination) {

	char *res = destination;

	for (;;) {
		*destination = *source;
		if (*source == '\0') {
			break;
		}

		destination++;
		source++;
	}

	return res;
}

int main(void) {

	char destination[10] = "Gandalf";
	char source[12] = "hermione";

	myStrcpy(source, destination);

	puts(destination);

	_getch();
	return 0;
}