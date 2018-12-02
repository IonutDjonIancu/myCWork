#include <stdio.h>

// program to reverse a sentence

void reverse();


int main()
{
	printf( "enter a sentece:\n" );
	reverse();
	printf("\n");

	getch();
	return 0;
}

void reverse()
{
	char c;

	scanf_s( "%c", &c );

	if (c != '\n')
	{
		reverse();
		printf( "%c", c );
	}
}