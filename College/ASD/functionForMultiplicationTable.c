#include <stdio.h>

int main()
{
	int number, i, j, table;

	printf("give number:\n");
	scanf_s("%d", &number);

	if (number > 0 && number < 11)
	{
		for (i = 1; i < 11; i++)
		{
			j = number * i;
			printf("%d*%d=%d\n", number, i, j);
		}
	}
	else
	{
		printf("wrong number");
	}

	getch();
	return 0;
}