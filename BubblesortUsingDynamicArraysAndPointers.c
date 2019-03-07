#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)

// bubblesort dynamic array

int main(void) {

	int *numbers, *ptr, aux = 0, swap, nrOfNumbers;

	printf("How many numbers: ");
	scanf_s("%d", &nrOfNumbers);

	if (nrOfNumbers <= 0 || nrOfNumbers >= 20) {
		puts("Wrong!");
		_getch();
		return 1;
	}

	numbers = (int*)malloc(nrOfNumbers * sizeof(int));
	if (numbers == NULL) {
		puts("Out of memory!");
		_getch();
		return 1;
	}

	for (ptr = numbers; ptr <= &numbers[nrOfNumbers - 1]; ptr++) {
		printf("elem @%p: ", ptr);
		scanf_s("%d", ptr);
	}

	do {
		swap = 0;
		for (ptr = numbers; ptr <= &numbers[nrOfNumbers - 2]; ptr++) {
			if (*ptr > *(ptr + 1)) {
				swap = 1;
				aux = *ptr;
				*ptr = *(ptr + 1);
				*(ptr + 1) = aux;
				aux = 0;
			}
		}
	} while (swap);

	puts("Sorted array is:");
	for (ptr = numbers; ptr <= &numbers[nrOfNumbers - 1]; ptr++) {
		printf("%d ", *ptr);
	}

	free(numbers);

	_getch();
	return 0;
}