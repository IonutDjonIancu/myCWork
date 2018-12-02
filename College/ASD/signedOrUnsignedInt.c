#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double a;

	printf("enter a number:\n");
	scanf_s("%lf", &a);

	(a >= 0) ? printf("%lf is positive", a) : printf("%lf is negative", a);

	getch();
	return 0;
}