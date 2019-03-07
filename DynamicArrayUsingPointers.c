#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)

int main(void) {
	
	int *ptrOrigin, *ptr, i, sum = 0;

	ptrOrigin = (int*)malloc(5 * sizeof(int));

	ptr = ptrOrigin;

	*ptrOrigin = 5;
	*(ptrOrigin + 1) = 8;

	printf("%d\n", *ptr++);
	printf("%d\n", *ptr);

	free(ptrOrigin);

	_getch();
	return 0;
}