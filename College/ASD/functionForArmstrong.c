#include <stdio.h>
#include <math.h>

// program that checks if a number is Armstrong with n digits

int main()
{
	int number, originalNumber, remainder, digits, result;

	digits = 0;
	result = 0;

	printf("give an integer number:\t");
	scanf_s("%d", &number);

	originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++digits;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result += pow(remainder, digits);
		originalNumber /= 10;
	}

	if (result == number)
	{
		printf("number is Amrstrong number");
	}
	else
	{
		printf("number is not Armstrong");
	}

	getch();
	return 0;
}








