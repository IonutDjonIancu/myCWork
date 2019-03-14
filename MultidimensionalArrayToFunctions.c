#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// multi-dimensional arrays to functions

void print(int t[][3]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", t[i][j]);
		}
		printf("\n");
	}

}



int main(void) {

	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	print(arr[1][2]);




	_getch();
	return 0;
}