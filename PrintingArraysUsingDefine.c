#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)   
#define SIZE 10

int main(int argc, char *argv[]) {
	
	int arr[SIZE], i, sum = 0;

	for (i = 0; i < SIZE; i++) {
		arr[i] = 2 * i;
	}

	for (i = 0; i < SIZE; i++) {
		sum += arr[i];
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d%s", arr[i], (i == SIZE - 1) ? "\n" : " ");
	}

	_getch();
	return 0;
}