#include <stdio.h>

// Program that calculates the Sum of all natural numbers
// up to a given number using Recursion

int recursion(int n);

int main()
{
	int number;

	printf("give a number:\n");
	scanf_s("%d", &number);

	printf("the sum of the first %d numbers is %d", number, recursion(number));

	getch();
	return 0;
}

int recursion(int n)
{
	if (n != 0)
	{
		return n + recursion(n - 1);
	}
	else
	{
		return n;
	}
}