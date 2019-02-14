#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main()
{
#include <stdio.h>

	
	int a[10][10], transpose[10][10], r, c, i, j;
	printf("Enter rows and columns of matrix: ");
	scanf_s("%d %d", &r, &c);

	// Storing elements of the matrix
	printf("\nEnter elements of matrix:\n");
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf_s("%d", &a[i][j]);
		}

	// Displaying the matrix a[][] */
	printf("\nEntered Matrix: \n");
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			printf("%d  ", a[i][j]);
			if (j == c - 1)
				printf("\n\n");
		}

	// Finding the transpose of matrix a
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			transpose[j][i] = a[i][j];
		}

	// Displaying the transpose of matrix a
	printf("\nTranspose of Matrix:\n");
	for (i = 0; i < c; ++i)
		for (j = 0; j < r; ++j)
		{
			printf("%d  ", transpose[i][j]);
			if (j == r - 1)
				printf("\n\n");
		}


	_getch();
	return 0;
}