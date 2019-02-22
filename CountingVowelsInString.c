#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char line[150];
	int vowels = 0;

	printf("enter a line of string:");
	//scanf_s("%[^\n]", line, sizeof(line));
	gets(line);


	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
		{
			vowels++;
		}
	}

	puts(line);
	printf("has %d vowels", vowels);





	_getch();
	return 0;
}
