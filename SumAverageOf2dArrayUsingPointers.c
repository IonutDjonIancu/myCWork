#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

// program to calculate sum and average of elements of a 3-by-3 2d array

int main(void) {
	
	int matrice[3][3];
	int *ptr;
	ptr = &matrice[0][0]; // pointer initialization to address of origin
	int i, j, sum = 0, counter = 0;

	// matrice elements initializations
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("[%d][%d] = ", i, j);
			counter++;
			scanf_s("%d", ptr++); // pointer jumps to each address within array
		}
	}

	ptr = matrice; // pointer reset to initial pozition of array
	puts("The matrix is:");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += *ptr; // sum calculated with pointer value return
			printf("[%d]", *(ptr++)); // array printed with pointer value return as the pointer is increased arithmetically to each address within array
		}
		printf("\n");
	}

	printf("Sum is %d\n", sum);
	printf("Average is %d", sum / counter);

	_getch();
	return 0;
}