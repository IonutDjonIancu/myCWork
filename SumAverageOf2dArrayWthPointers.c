#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	
	int matrice[3][3];
	int *ptr;
	ptr = &matrice[0][0];
	int i, j, sum = 0, counter = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("[%d][%d] = ", i, j);
			counter++;
			scanf_s("%d", ptr++);
		}
	}

	ptr = matrice;
	puts("The matrix is:");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += *ptr;
			printf("[%d]", *(ptr++));
		}
		printf("\n");
	}

	printf("Sum is %d\n", sum);
	printf("Average is %d", sum / counter);

	_getch();
	return 0;
}