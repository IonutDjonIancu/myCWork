#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float CalculateSD(float data[])
{
	float sum = 0.0, mean, standardDeviation = 0.0;

	for (int i = 0; i < 10; i++)
	{
		sum += data[i];
	}

	mean = sum / 10;

	for (int j = 0; j < 10; j++)
	{
		standardDeviation += pow(data[j] - mean, 2);
	}

	return sqrt(standardDeviation / 10);
}



int main()
{
	float data[10];

	printf("give 10 elements:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%f", &data[i]);
	}

	printf("SD is: %.6f", CalculateSD(data));
	   	   
	_getch();
	return 0;
}