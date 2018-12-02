#include <stdio.h>

// program that calculates the power of a number using recursion

int power(int a, int b);

int main()
{
	int base, pow, result;

	printf( "give a number and exponent:\n" );
	scanf_s( "%d%d", &base, &pow );

	result = power(base, pow);

	printf( "%d^%d = %d", base, pow, result );

	getch();
	return 0;
}

int power(int a, int b)
{
	if (b != 0)
	{
		return (a * power(a, b - 1));
	}
	else
	{
		return 1;
	}
}