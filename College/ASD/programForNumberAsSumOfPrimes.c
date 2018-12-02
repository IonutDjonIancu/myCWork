#include <stdio.h>

int prime(int n);

int main()
{
	int n, fprime, sprime, flag = 0;

	printf("enter a positive integer: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		if (prime(i) == 1)
		{
			fprime = i;

			for (int j = fprime; j < n; j++)
			{
				if (prime(j) == 1)
				{
					sprime = j;
					if (fprime + sprime == n)
					{
						if (prime(fprime) == 1)
						{
							printf("numbers found ( %d, %d )", fprime, sprime);
							break;
						}
					}
				}
			}
		}
	}

	getch();
	return 0;
}

int prime(int n)
{
	int i, isPrime = 1;

	for (i = 2; i < n / 2; i++)
	{
		if (n%i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}




