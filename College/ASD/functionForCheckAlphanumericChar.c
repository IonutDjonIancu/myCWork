#include <stdio.h>

int main()
{
	char c;

	printf("enter a character:\n");
	scanf_s("%c", &c);

	(isalpha(c)) ? printf("%c is an alphabet character", c) : printf("%c is not an alphabet character", c);

	getch();
	return 0;
}