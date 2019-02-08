#include <stdio.h>
#define MAX 65535

int main()
{
	int arr[5] = { 66, 123, 10, 88, 15 };

	int x = 0;
	int min = arr[0];
	int index = 0;

	int *ptr;
	ptr = (int *)(malloc(sizeof(arr)));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}

		ptr[x] = min;
		arr[index] = MAX;
		x++;
		min = arr[index];

	}

	printf("Sorted array is: ");
	for (int k = 0; k < sizeof(arr) / sizeof(int); k++)
	{
		printf("%d ", ptr[k]);
	}


	getch();
	return 0;
}