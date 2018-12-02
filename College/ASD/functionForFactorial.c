#include <stdio.h>

int main()
{
	int number, i;
	unsigned long long product = 1;

	printf("give number:\n");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		product *= i;
	}

	printf("%d factorial is %llu", number, product);

	getch();
	return 0;
}