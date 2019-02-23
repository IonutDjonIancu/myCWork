#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// program that adds two distances using structs

struct Distance 
{
	int feet;
	float inch;
} dist1, dist2, sum;

int main()
{
	printf("1st distance.feet:");
	scanf_s("%d", &dist1.feet);

	printf("1st distance.inch:");
	scanf_s("%f", &dist1.inch);

	printf("2nd distance.feet:");
	scanf_s("%d", &dist2.feet);

	printf("2nd distance.inch:");
	scanf_s("%f", &dist2.inch);

	sum.feet = dist1.feet + dist2.feet;
	sum.inch = dist1.inch + dist2.inch;

	while (sum.inch >= 12)
	{
		sum.feet++;
		sum.inch -= 12;
	}

	printf("sum of %df%.2fi + %df%.2fi = %df%.2fi", dist1.feet, dist1.inch, dist2.feet, dist2.inch, sum.feet, sum.inch);

	_getch();
	return 0;
}
