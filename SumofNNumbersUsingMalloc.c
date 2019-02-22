#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n, *ptr, sum = 0;

	printf("Enter number of elements: ");
	scanf_s("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("Could not allocate memory!");
		_getch();
		exit(0);
	}

	printf("Enter elements:\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", ptr + i);
		sum += *(ptr + i);
	}

	printf("Sum = %d\n", sum);
	printf("Values are at addresses:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d @ %p\n", *(ptr+i), ptr+i);
	}

	free(ptr);
	
	_getch();
	return 0;
}