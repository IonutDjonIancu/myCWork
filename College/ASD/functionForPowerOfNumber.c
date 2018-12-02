#include <stdio.h>
#include <math.h>

int main()
{ 
	int a, base, exponent;

	printf("give the base and the exponent:\n");
	scanf_s("%d%d", &base, &exponent);

	a = pow(base, exponent);

	printf("%d^%d is: %d", base, exponent, a);

	getch();
	return 0;
}
