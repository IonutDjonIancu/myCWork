#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[1000], ch;
	int frequency = 0;

	printf("enter a string: "); 
	gets(str);

	printf("enter a character to find its frequency: ");
	scanf_s("%c", &ch, sizeof(ch));

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (ch == str[i])
		{
			frequency++;
		}
	}

	printf("%c appears %d times\n", ch, frequency);
	

	_getch();
	return 0;
}
