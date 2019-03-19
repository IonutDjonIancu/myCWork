#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// file stream open for reading and sent to stdout via command line

int main(int argc, char *argv[]) {

	FILE *filePtr;
	int chr;

	argc != 2 ? puts("No file provided") : printf("Loading %s\n", argv[1]);

	filePtr = fopen(argv[1], "rt");
	!filePtr ? puts("Unable to open file") : printf("Opening %s\n", argv[1]);

	while ((chr = fgetc(filePtr)) != EOF) {
		printf("%c", chr);
	}

	fclose(filePtr);

	_getch();
	return 0;
}