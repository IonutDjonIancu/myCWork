#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int *arr, n1, n2;

	printf("Enter number of elements of array: ");
	scanf_s("%d", &n1);

	arr = (int*)malloc(n1 * sizeof(int));

	printf("Addresses of initial allocated memory are:\n");
	for (int i = 0; i < n1; i++)
	{
		printf("%p\n", &arr[i]);
	}

	printf("Resize array to more elements (more than %d): ", n1);
	scanf_s("%d", &n2);

	arr = realloc(arr, n2 * sizeof(int));

	printf("Addresses of newly allocated memory are:\n");
	for (int j = 0; j < n2; j++)
	{
		printf("%p\n", &arr[j]); 
	}

	free(arr);

	_getch();
	return 0;
}