#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int num;
	float *data, sum = 0;

	printf("Enter the total numbers for average: ");
	scanf_s("%d", &num);

	data = (float*)malloc(num * sizeof(float));

	for (int i = 0; i < num; i++)
	{
		printf("give number %d: ", i+1);
		scanf_s("%f", data + i);
		sum += *(data + i);
	}

	printf("Average is: %.2f", sum / num);
	
	free(data);
	_getch();
	return 0;
}