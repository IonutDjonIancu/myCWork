#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// pointers to structures explained

struct EMPLOYEE {

	char name[10];
	int hiringDate[3];
	int level;
	float salary;

};

int main(void) {

	struct EMPLOYEE *ptrOrigin;
	void *ptr;
	
	// 32 bytes allocated for the entire structure
	printf("%d\n", sizeof(struct EMPLOYEE)); 

	// creates the ptrOrgin object
	ptrOrigin = (struct EMPLOYEE *)malloc(sizeof(struct EMPLOYEE)); 

	// gives a value to the name field inside the ptrOrigin object
	strcpy(ptrOrigin->name, "George"); 
	//replaces the char array's (string) first element 
	ptrOrigin->name[0] = 'X'; 
	puts(ptrOrigin->name);
	
	// using the member operator we add elements in the array using a modifiable l-value
	*(ptrOrigin->hiringDate) = 22;
	*(ptrOrigin->hiringDate + 1) = 3;
	*(ptrOrigin->hiringDate + 2) = 2019;

	/*same with:
	0[ptrOrigin->hiringDate] = 22;
	1[ptrOrigin->hiringDate] = 3;
	2[ptrOrigin->hiringDate] = 2019;

	same with:
	ptrOrigin->hiringDate[0] = 22; 
	ptrOrigin->hiringDate[1] = 3;
	ptrOrigin->hiringDate[2] = 2019;*/

	// we initialize ptr as the ptrOrigin since we cannot apply postfix incrementation ++ to ptrOrigin given the fact ptrOrigin points to the allocated memory zone
	ptr = ptrOrigin->hiringDate; 

	for (
		(int*)ptr = ptrOrigin->hiringDate; // returns an address
		(int*)ptr <= ptrOrigin->hiringDate + 2; // returns an address incremented by 2 from the original 0th element 0 + 1 + 2 -> returns the 3rd element's address
		((int*)ptr)++) { // ptr ends up poiting to the address of ptrOrigin->hiringDate + 2, and needs to be reset if used again 
		// ptr has to be typecasted since it's a void pointer
		// ptr typecast needs parantheses due to the higher priority of the postfix operator
		
		printf("%d ", *(int*)ptr); // returns a value, another typecast for void pointer ptr
	}
	printf("\n");

	ptrOrigin->level = 1;
	ptrOrigin->salary = 1500.55f;

	printf("%p\n", ptrOrigin); // this is the address where the structure begins
	printf("%p\n", ptrOrigin->name); // same with the address of the structure's first field's first element
	printf("%p\n", ptrOrigin->hiringDate);

	puts("\nPrinting the entire struct object:");

	// we print elements manually since there is no reflection in C language
	printf("%s\n%d %d %d\n%d\n%.2f", ptrOrigin->name, *(ptrOrigin->hiringDate), *(ptrOrigin->hiringDate + 1), *(ptrOrigin->hiringDate + 2), ptrOrigin->level, ptrOrigin->salary );

	free(ptrOrigin);

	_getch();
	return 0;
}