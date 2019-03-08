#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)

// pointer to pointers array of ints

int main(void) {

	int **tab, *ptr, var, nrOfPtrElems, nrOfIntElems, i, j;

	nrOfPtrElems = 5;
	nrOfIntElems = 3;
	var = 1;

	// allocates memory for the tab array of pointers
	tab = (int**)malloc(nrOfPtrElems * sizeof(int*));

	// allocates memory for each array of elements of tab
	for (i = 0; i < nrOfPtrElems; i++) {
		tab[i] = (int*)malloc(nrOfIntElems * sizeof(int));
	}

	// accessing elements of the array to insert values
	for (i = 0; i < nrOfPtrElems; i++) {
		for (j = 0; j < nrOfIntElems; j++) {
			tab[i][j] = var; // value added
			var++;
		}
	}

	// printing 2d array
	for (i = 0; i < nrOfPtrElems; i++) {
		for (j = 0; j < nrOfIntElems; j++) {
			printf("[%d]\t", tab[i][j]);
		}
		printf("\n");
	}

	free(tab);

	_getch();
	return 0;
}