#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// file streams open for reading (r)

int main(int argc, char *argv[]) {

	FILE *filePtr;

	// the open mode is defined as rt = text to read
	filePtr = fopen("C:\\Users\\iianc\\source\\repos\\Project1\\Project1\\doc.txt", "rt");

	if (!filePtr) {
		puts("Cannot open file!");
		return 1;
	}

	fclose(filePtr);

	_getch();
	return 0;
}