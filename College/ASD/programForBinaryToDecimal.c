#include <stdio.h>
#include <math.h>

// program to convert from binary to decimal

int binary( long long n );

int main()
{
	long long number;

	printf( "give a binary number:\n" );
	scanf_s( "%lld", &number );
	
	printf( "%lld in binary = %d in decimal\n", number, binary( number ) );

	getch();
	return 0;
}

int binary( long long n )
{
	int decimal, i, remainder;
	decimal = 0;
	i = 0;

	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimal += remainder * (int)pow(2, i);
		i++;
	}
	
	return decimal;
}

