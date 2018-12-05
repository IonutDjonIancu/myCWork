#include <stdio.h>
#include <conio.h>

int main()
{
	int marks[10], i, n, sum, average;
	sum = 0;

	printf( "give n: " );
	scanf_s( "%d", &n );

	for (i = 0; i < n; i++)
	{
		printf( "enter number %d: ", i+1 );
		scanf_s( "%d", &marks[i] );
		sum += marks[i];
	}

	average = sum / n;

	printf( "Rounded average = %d", average );

	_getch();
	return 0;
}