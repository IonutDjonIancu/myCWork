#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// declaring the function to accept an array by using a pointer and a variable which shows 
// the length of the expected array
void mul2(int *ptr, int sizeofArr) {
	int *ptr2;	// we use another pointer to parse the array since the array pointer origin 
				//does not accept postfix incrementation
	
	for (ptr2 = ptr; ptr2 < ptr + sizeofArr; ptr2++) {
		*ptr2 *= 2;
	}
}

int main(void) {
	
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr;

	for (ptr = arr; ptr < arr + 5; ptr++) {
		printf("%d ", *ptr);
	}
	puts("");

	mul2(arr, 5);

	for (ptr = arr; ptr < arr + 5; ptr++) {
		printf("%d ", *ptr);
	}
	
	_getch();
	return 0;
}