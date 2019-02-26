#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int var = 20;
	int *ptr, **ptptr;

	ptr = &var;
	ptptr = &ptr;

	printf("var = %d\n", var);
	printf("var @ %p\n", &var);
	printf("*ptr = %p\n", ptr);
	printf("*ptr @ %p\n", &ptr);
	printf("**ptptr = %p\n", ptptr);
	printf("**ptptr @ %p\n", &ptptr);

	**ptptr = 25;
	printf("**ptr = 25\n", var);
	printf("var = %d\n", var);

	_getch();
	return 0;
}
