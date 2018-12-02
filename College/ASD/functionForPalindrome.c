#include <stdio.h>

int main()
{
	int n, reversedInteger, remainder, originalInteger;
	reversedInteger = 0;

	printf("give a number:\n");
	scanf_s("%d", &n);

	originalInteger = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversedInteger = reversedInteger * 10 + remainder;
		n /= 10;
	}

	if (originalInteger == reversedInteger)
		printf("number is palindrome");
	else
		printf("number is not a palindrome");

	getch();
	return 0;
}
