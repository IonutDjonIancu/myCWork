#include <stdio.h>

// function that checks the total number of digits in a given integer

int main()
{
	int number, digits;

	digits = 0;

	printf("give an integer number:\t");
	scanf_s("%d", &number);

	while (number != 0)
	{
		number /= 10;
		++digits;
	}

	printf("%d", digits);

	getch();
	return 0;
}