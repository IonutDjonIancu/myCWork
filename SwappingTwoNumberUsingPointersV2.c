#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 10, b = 25;
	int *ptr1, *ptr2, *temp;

	ptr1 = &a;
	ptr2 = &b;

	printf("%p\n", ptr1);
	printf("%d\n", *ptr1);
	printf("%p\n", ptr2);
	printf("%d\n", *ptr2);
	printf("---\n");
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("%p\n", ptr1);
	printf("%d\n", *ptr1);
	printf("%p\n", ptr2);
	printf("%d\n", *ptr2);



	_getch();
	return 0;
}