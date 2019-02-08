#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[5] = { 21, 15, 22, 44, 7 };
	int i, j;

	printf("Array before sorting:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])	// you can reverse the sorting by reversing the > into < sign
			{
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}

	printf("\nArray after sorting\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}


	_getch();
	return 0;
}