#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Number
{
	int decimal;
	int floating;
}number;

void AddNumbers(number n1, number n2, number *ptr);

int main()
{
	number num1, num2, result;

	printf("num1 decimal ");
	scanf_s("%d", &num1.decimal);
	printf("num1 floating ");
	scanf_s("%d", &num1.floating);

	printf("num2 decimal ");
	scanf_s("%d", &num2.decimal);
	printf("num2 floating ");
	scanf_s("%d", &num2.floating);

	AddNumbers(num1, num2, &result);

	printf("Result = %d.%d", result.decimal, result.floating);

	_getch();
	return 0;
}

void AddNumbers(number n1, number n2, number *ptr)
{
	ptr->decimal = n1.decimal + n2.decimal;
	ptr->floating = n1.floating + n2.floating;
}