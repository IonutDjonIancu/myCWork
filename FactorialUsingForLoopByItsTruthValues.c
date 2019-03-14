#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

int Factorial(int n) {
	int product;

	for (product = 1; n; product *= n--);
	return product;
}

int main(int argc, char *argv[]) {
	
	printf("%d", Factorial(5));
	
	_getch();
	return 0;
}