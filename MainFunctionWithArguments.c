#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// main function arguments

int main(int argc, char *argv[]) {
	int i;

	for (i = 0; i < argc; i++) {
		// this will print the name of the program + the full path
		printf("%s\n", argv[i]);
	}


	_getch();
	return 0;
}