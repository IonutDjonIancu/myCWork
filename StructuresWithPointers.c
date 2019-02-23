#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person
{
	int age;
	float weight;
}person;


int main()
{
	// person1 variable of type person (struct) is created
	// person1 will inherit two properties (from struct person) age and weight
	person *ptr, person1;

	// pointer ptr points to address of person1
	ptr = &person1;

	printf("Enter age: ");
	scanf_s("%d", &ptr->age);

	printf("Enter weight: ");
	scanf_s("%f", &ptr->weight);

	printf("%d\n", person1.age);
	printf("@%p\n", &person1.age);

	printf("%.2f\n", person1.weight);
	printf("@%p\n", &person1.weight);

	_getch();
	return 0;
}
