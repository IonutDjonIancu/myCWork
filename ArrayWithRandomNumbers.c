#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define size sizeof(p)

int main()
{
	int a = 5;
	int *p;
	p = (int *)malloc(a * sizeof(int));
	srand((unsigned int)time(0));
	p[0] = rand() % 10;
	p[1] = rand() % 10;
	p[2] = rand() % 10;
	p[3] = rand() % 10;
	p[4] = rand() % 10;

	for (int i = 0; i <= size; i++)
	{
		printf("value [%d] is at address <%p> and has the value of: %d\n", i, &p[i], p[i]);
	}

	_getch();
	return 0;
}