#include <stdio.h>

// program to convert a number from base 10 to binary
int main()
{
	int nr, rest, newNr;
	nr = 0;

	printf("give nr: ");
	scanf_s("%d", &nr);

	while (nr != 0)
	{
		rest = nr % 2;
		nr /= 2;
		printf("%d", rest);

	}
	
	printf("\n^ must be read backwards");


	getch();
	return 0;
}