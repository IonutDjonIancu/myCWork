#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// declaring the function to accept an array by using a pointer and a variable which shows 
// the length of the expected array
void MultiplyBy2(int *ptr, int sizeofArr) {
	int *ptr2;	// we use another pointer to parse the array since the array pointer origin 
				//does not accept postfix incrementation
	
	for (ptr2 = ptr; ptr2 < ptr + sizeofArr; ptr2++) {
		*ptr2 *= 2;
	}
}

// we use a function to print the array instead of multiple for loops
void Print(int a[], int sizeofArr) {
	int *ptr;
	for (ptr = a; ptr < a + sizeofArr; ptr++) {
		printf("%d ", *ptr);
	}
}

int main(void) {
	
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr;

	Print(arr, 5);
	puts("");

	MultiplyBy2(arr, 5);
	Print(arr, 5);
	
	_getch();
	return 0;
}