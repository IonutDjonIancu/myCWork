#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int arr[5];
	int *p;

	p = arr;

	for (int j = 0; j < 5; j++)
	{
		printf("enter element %d: ", j + 1);
		scanf_s("%d", p + j);

	}

	// printing array elements using pointer
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(p + i));
	}

	printf("\n");
	// printing array elements using array indexes
	for (int k = 0; k < 5; k++)
	{
		printf("%d\n", arr[k]);

	}


	_getch();
	return 0;
}