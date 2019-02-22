#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	// must be pointer to create an array for the string's chars
	char *myString1 = "abcde";
	// can be declared as an array directly
	char myString2[6] = "abcde";

	printf("%s - %d\n", myString1, sizeof(myString1));
	printf("%s - %d\n", myString2, sizeof(myString2));

	// printing strings
	// with values
	for (int i = 0; myString1[i] != '\0'; i++)
	{
		printf("%c", myString1[i]);
	}
	printf("\n");
	// with pointer
	char *ptr;
	for (ptr = myString1; *ptr != '\0'; ptr++)
	{
		printf("%c", *ptr);
	}



	_getch();
	return 0;
}