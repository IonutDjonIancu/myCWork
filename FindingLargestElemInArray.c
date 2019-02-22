#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int num;
	float *data;

	printf("Enter number of elements: ");
	scanf_s("%d", &num);

	// allocates the memory for num elements
	data = (float*)calloc(num, sizeof(float));

	if (data == NULL)
	{
		printf("Not enough memory!");
		exit(0);
	}

	// stores the number entered by the user
	for (int i = 0; i < num; i++)
	{
		printf("Enter element %d: ", i);
		scanf_s("%f", data + i);
	}

	// loop to store largest number at address data
	for (int j = 1; j < num; j++)
	{
		if (*data < *(data + j))
		{
			*data = *(data + j);
		}
	}

	printf("Largest element is: %.2f\n", *data);

	free(data);
	_getch();
	return 0;
}