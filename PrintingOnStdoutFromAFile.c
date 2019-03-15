#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// file stream open for reading and sent to stdout

int main(int argc, char *argv[]) {

	FILE *filePtr;
	int character;

	filePtr = fopen("C:\\Users\\iianc\\source\\repos\\Project1\\Project1\\doc.txt", "rt");

	(!filePtr) ? printf("Error while opening file number: %s\n", strerror(errno)) : puts("File open in read mode");

	while ((character = fgetc(filePtr)) != EOF) {
		printf("%c", character);
	}

	fclose(filePtr);

	_getch();
	return 0;
}