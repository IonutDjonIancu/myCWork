#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

int main(int argc, char *argv[]) {

	char *word;
	word = (char*)malloc(5);

	for (int i = 0; i <= 5; i++) {
		if (i == 5) {
			word[i] = '\0';
		}
		else {
			fscanf(stdin, "%s", &word[i]);
		}
	}

	puts(word);
	   
	_getch();
	return 0;
}


