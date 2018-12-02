#include <stdio.h>
#include <math.h>

// program to convert from decimal to binary

long long convert( int n );

int main()
{
	int n;
	printf( "enter a decimal number: " );
	scanf_s( "%d", &n );

	printf( "%d in decimal = %lld in binary", n, convert(n) );

	getch();
	return 0;
}

long long convert(int n)
{
	long long binaryNumber = 0;
	int remainder, i, step;
	i = 1;
	step = 1;

	while (n != 0)
	{
		remainder = n % 2;
		printf( "Step %d: %d/2, remainder = %d, quotient = %d\n", step++, n, remainder, n/2 );
		n /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}

	return binaryNumber;
}