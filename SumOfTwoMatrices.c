#include <stdio.h>
#include <conio.h>

int main()
{
	int matr1[2][2], matr2[2][2], rez[2][2];

	printf("Give values for the first matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf_s("%d", &matr1[i][j]);
		}
	}
	printf("Give values for the second matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf_s("%d", &matr2[i][j]);
		}
	}
	for (int k = 0; k < 2; k++)
	{
		for (int l = 0; l < 2; l++)
		{
			rez[k][l] = matr1[k][l] + matr2[k][l];
			printf("%d\n", rez[k][l]);
		}
	}

	_getch();
	return 0;
}