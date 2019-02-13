#include <stdio.h>
#include <conio.h>

void Swap(int *n1, int *n2) // takes pointers as parameters, which are addresses
{
	// parameter pointers will store the information from the addresses passed to the func

	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	int num1, num2, *ptr1, *ptr2;
	num1 = 5;
	num2 = 10;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("num1 is %d\n", num1);
	printf("num2 is %d\n", num2);

	Swap(ptr1, ptr2);
	// Swap(&num1, &num2) also works
	printf("Swap--\n");

	printf("num1 is %d\n", num1);
	printf("num2 is %d\n", num2);


	_getch();
	return 0;
}