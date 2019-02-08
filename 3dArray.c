#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[2][3][2] = { {{11, 22},{33, 44},{55, 66}}, {{77, 88},{99, 110},{121, 132}} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				printf("%d\n", arr[i][j][k]);
			}
		}
	}


	_getch();
	return 0;
}