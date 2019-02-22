#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void DisplayString(char string[]);

int main()
{
	//char string[5]; // unreferenced local variable

	char string1[] = "abc";
	char string2[50] = "abc";
	char string3[] = {'a','b','c','\0'};
	char string4[4] = {'a','b','c','\0'};
	
	// similarity with arrays
	int arr[3] = {1, 2, 3};

	char name[20];
	printf("enter name:");
	scanf_s("%s", &name, sizeof(name));
	printf("your name is: %s\n", name);

	char name2[10] = "my name";
	DisplayString(name2);

	
	printf("%c\n", *name);
	printf("%c\n", *(name + 2));
	printf("%c\n", *(name + 3));

	char *namePtr;

	namePtr = name;
	printf("%c\n", *namePtr);
	printf("%c\n", *(namePtr + 1));

	printf("%s is len %d", name, strlen(name));
	printf("\n");

	char nameCopy[50];

	strcpy_s(nameCopy, sizeof(nameCopy), name);
	printf("name copied is: %s\n", nameCopy);
	strcpy_s(nameCopy, sizeof(nameCopy), "well well");
	printf("new nameCopy is: %s\n", nameCopy);

	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";

	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str3));
	printf("%d\n", sizeof(str2));

	_getch();
	return 0;
}

void DisplayString(char str[])
{
	printf("String output %s\n", str);
}