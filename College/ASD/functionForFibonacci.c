#include <stdio.h>

int main()
{
	int t1 = 0, t2 = 1, nextTerm = 0, n;

	printf("give a number:\n");
	scanf_s("%d", &n);

	while (nextTerm <= n)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	getch();
	return 0;
}