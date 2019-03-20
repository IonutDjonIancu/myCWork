#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// bubble sort

void bubbleSort(int *a, int n) {
	int i, t, j = n, s = 1;

	while (s) {
		s = 0;
		for (i = 1; i < j; i++) {
			if (a[i] < a[i - 1]) {
				t = a[i];
				a[i] = a[i - 1];
				a[i - 1] = t;
				s = 1;
			}
		}
		j--;
	}
}

int main(int argc, char *argv[]) {

	int a[] = {-1, 268, 12, 557, -43, 28, 77, -4, 10, 8, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int i;

	puts("array is:");
	for (i = 0; i < n; i++) {
		printf("%d%s", a[i], (i == n - 1) ? "\n\n" : " ");
	}

	bubbleSort(a, n);

	puts("sorted array is:");
	for (i = 0; i < n; i++) {
		printf("%d%s", a[i], (i == n - 1) ? "\n" : " ");
	}
	   	 	
	_getch();
	return 0;
}