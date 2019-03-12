#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// pointers to structures using function call and dynamic data
void CreateEmployee(void);

struct EMPLOYEE {

	char name[100];
	int hiringDate[3];
	int level;
	float salary;

};

int main(void) {


	CreateEmployee();

	_getch();
	return 0;
}

void CreateEmployee(void) {

	struct EMPLOYEE *ptrOrigin;
	ptrOrigin = (struct EMPLOYEE *)malloc(sizeof(struct EMPLOYEE));

	char name[50];
	int hiringDate[3];
	int level;
	float salary;

	puts("Enter employee name:");
	gets_s(name, 50);

	puts("Enter employee hiringDate:");
	scanf_s("%d%d%d", hiringDate, hiringDate + 1, hiringDate + 2);

	puts("Enter employee level:");
	scanf_s("%d", &level);

	puts("Enter employee salary/h:");
	scanf_s("%f", &salary);

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