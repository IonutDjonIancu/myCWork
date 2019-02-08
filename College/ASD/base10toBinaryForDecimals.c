#include <stdio.h>


int main()
{
	float nr, result;
	int precision;

	printf("\ngive nr: ");
	scanf_s("%f", &nr);
	printf("insert precision: ");
	scanf_s("%d", &precision);

	printf(".");

	for (int i = 0; i <= precision; i++)
	{
		result = nr * 2;
		if (result < 1)
		{
			printf("0");
			nr = result;
		}
		else
		{
			printf("1");
			nr = result - 1;
		}
		
	}
	

	getch();
	return 0;
}
