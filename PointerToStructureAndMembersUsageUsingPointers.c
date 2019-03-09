#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)

struct STUDENT { // we create the structure, no memory is allocated
	char name[11]; // we create structure members, memory is allocated per type of member
	int age;
};

int main(void) {

	struct STUDENT *ptr; // we create structure type pointer
	ptr = (struct STUDENT *)malloc(sizeof(struct STUDENT)); // we allocate memory for that pointer in order to sustain and initialize the structure type

	ptr->age = 22; // we add values to the structure via it's origin pointer and structure members by using the member operator (-> for pointers)
	strcpy(ptr->name, "Dolphin");

	puts(ptr->name);

	char *ptr2; // we create another pointer of the member type we need to operate on inside the structure
	ptr2 = ptr->name; // we initialize it using the origin pointer and one of its members
	printf("%c", *ptr2);
	printf("%c", *(ptr2 + 1)); // we use pointer arithmetics on the new free pointer to run around the structure members and modify them if needed
	printf("%c", *(ptr2 + 2));
	printf("%c", *(ptr2 + 3));
	
	_getch();
	return 0;
}