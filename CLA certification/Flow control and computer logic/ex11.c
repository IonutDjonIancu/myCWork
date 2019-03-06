#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void) {
	
	int i = 0, j = 1, k;
	k = i << j + j << i;
	printf("%d", k);

	// k return 0 because of order of operations
	// + has a hierarchy higher than << bitwise operator

	_getch();
	return 0;
}