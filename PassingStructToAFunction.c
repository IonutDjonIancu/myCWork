#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	char name[50];
	int age;
}student;

void Display(student s);

int main()
{
	student s1;

	printf("Enter new name: ");
	scanf_s("%[^\n]", s1.name, sizeof(s1.name));

	printf("Enter age: ");
	scanf_s("%d", &s1.age);

	Display(s1);

	_getch();
	return 0;
}

void Display(student s)
{
	printf("\nDisplaying information:\n");
	printf("Name %s\n", s.name);
	printf("Age %d\n", s.age);
}