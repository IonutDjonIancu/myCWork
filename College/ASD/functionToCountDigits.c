#include <stdio.h>

int main()
{

	int n;
	int counter = 0;

	printf("give number:\n");
	scanf_s("%d", &n);
	int a = n;

	while (n != 0)
	{
		n /= 10;
		++counter;
	}

	printf("the number %d has %d digits", a, counter);

	getch();
	return 0;
}