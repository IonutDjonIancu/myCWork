#include <stdio.h>
#include <conio.h>

int main()
{
	int x[5] = { 22, 33, 44, 55, 66 };
	int *ptr;

	ptr = &x[2];

	printf("Array is: ");

	for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
	{
		printf("%d ", x[i]);
	}

	printf("\n*ptr = %d\n", *ptr);
	printf("*ptr + 1 = %d\n", *ptr + 1);
	printf("*(ptr + 1) = %d\n", *(ptr + 1));
	
	_getch();
	return 0;
}