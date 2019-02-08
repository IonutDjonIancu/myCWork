#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int arr[5] = { 4, 5, 3, 2, 1 };
	int *p;

	for (int i = 0; i < 5; i++)
	{
		p = arr[i];
		printf("%d ", p);
	}


	_getch();
	return 0;
}