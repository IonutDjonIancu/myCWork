#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
	int age;
	float weight;
	char name[30];
}person;


int main()
{
	person *ptr;
	int i, n;

	printf("Enter number of persons: ");
	scanf_s("%d", &n);

	ptr = (person*)malloc(n * sizeof(person));

	for (i = 0; i < n; i++)
	{
		printf("first name and age:\n");
		scanf_s("%s%d", &(ptr+i)->name, sizeof(ptr->name), &(ptr+i)->age);
	}

	printf("----\n");

	for (i = 0; i < n; i++)
	{
		printf("Name: %s, age: %d\n", (ptr+i)->name, (ptr+i)->age);

	}
	
	_getch();
	return 0;
}
