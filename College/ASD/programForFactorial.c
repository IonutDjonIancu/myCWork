#include <stdio.h>

int recurs(int n);

int main()
{
	int a;

	printf("give a: ");
	scanf_s("%d", &a);

	printf("product all numbers up to %d is = %d", a, recurs(a));

	getch();
	return 0;
}

int recurs(int n)
{
	if (n > 0)
	{
		return (n * recurs(n - 1));
	}
	else
	{
		return 1;
	}
}


