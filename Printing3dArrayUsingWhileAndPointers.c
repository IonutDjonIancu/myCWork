#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	
	int guestList[3][10][20];
	int a = 0, *ptr;
	ptr = &guestList[0][0][0];

	while (1) {
		*ptr = ++a;
		ptr++;
		if (ptr > &guestList[2][9][19]) { // this guestList[2][9][19] != 0 works as well if initially set to 0
			break;
		}
	}

	ptr = &guestList[0][0][0];
	while (1) {
		printf("%d\n", *ptr++);
		if (ptr > &guestList[2][9][19]) {
			break;
		}
	}

	_getch();
	return 0;
}