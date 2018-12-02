#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

	printf("enter coeficients for a, b and c\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	discriminant = b * b - 4 * a*c;

	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 is: %lf, root2 is: %lf", root1, root2);
	}
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 and are: %lf", root1);
	}
	else
	{
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		printf("root1 is: %lf+%lfi and root2 is: %lf-%lfi", realPart, imaginaryPart, realPart, imaginaryPart);
	}

	getch();
	return 0;
}