#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char str1[5] = "abcde";
	char str2[5] = "fghij";
	
	char *n;
	n = (char*)malloc(sizeof(str1) + sizeof(str2));
	
	for (int i = 0; i < 5; i++)
	{
		n[i] = str1[i];
	}

	int m = 0;

	for (int j = 5; j < 10; j++)
	{
		m = j - 5;
		n[j] = str2[m];
	}

	for (int k = 0; k < 10; k++)
	{
		printf("%c", n[k]);
	}

	_getch();
	return 0;
}
