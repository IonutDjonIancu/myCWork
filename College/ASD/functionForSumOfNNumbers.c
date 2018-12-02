#include <stdio.h>

int main()
{
	int number, i, sum;
	sum = 0;

	printf("give the number:\n");
	scanf_s("%d", &number);

	for (i = 0; i <= number; i++)
	{
		sum += i;
	}

	printf("the sum of the first %d numbers is: %d", number, sum);



	getch();
	return 0;
}