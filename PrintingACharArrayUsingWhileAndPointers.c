#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	
	char arr[5] = "ABCDE", *ptr;
	ptr = &arr[0];

	while (1) {
		printf("%c", *(ptr++));
		if (ptr == &arr[5]) {
			break;
		}
	}


	_getch();
	return 0;
}