#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// pointers to structures using function call and static data
void CreateEmployee(char* name, int* hiringDate, int level, float salary);

struct EMPLOYEE {

	char name[10];
	int hiringDate[3];
	int level;
	float salary;

};

int main(void) {

	int startDate[3] = { 13, 10, 2019 };
	CreateEmployee("John", startDate, 2, 60.87f);
	   
	_getch();
	return 0;
}

void CreateEmployee(char* name, int* hiringDate, int level, float salary) {

	struct EMPLOYEE *ptrOrigin;
	ptrOrigin = (struct EMPLOYEE *)malloc(sizeof(struct EMPLOYEE));

	strcpy(ptrOrigin->name, name);
	*(ptrOrigin->hiringDate) = *hiringDate;
	*(ptrOrigin->hiringDate + 1) = *(hiringDate + 1);
	*(ptrOrigin->hiringDate + 2) = *(hiringDate + 2);
	ptrOrigin->level = level;
	ptrOrigin->salary = salary;

	printf("New employee: %s\n", ptrOrigin->name);
	printf("Starting with: %d.%d.%d\n", *(ptrOrigin->hiringDate), *(ptrOrigin->hiringDate + 1), *(ptrOrigin->hiringDate + 2));
	printf("Employee level: %d\n", ptrOrigin->level);
	printf("Employee salary/h: %.2f", ptrOrigin->salary);

	free(ptrOrigin);
}