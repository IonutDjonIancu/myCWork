#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

typedef struct Node {
	int value;
	struct Node *next;
} Node;

void printList(Node *p) {
	puts("Current stack is:");
	while (p) {
		printf("%d%s", p->value, (p->next) ? " " : " \\end of list\n");
		p = p->next;
	}
	puts("");
}

void push(Node *head, int number) {
	// we create the new node
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));

	// newNode head is set to head pointer
	newNode->next = head->next;
	// head pointer is set to the newNode address
	head->next = newNode;

	// values between nodes are swapped
	newNode->value = head->value;
	head->value = number;
}

void pop(Node *head) {
	head->value = head->next->value;
	head->next = head->next->next;
}

int main(int argc, char *argv[]) {

	Node *head = NULL;
	head = (Node *)malloc(sizeof(Node));
	head->value = 0;
	head->next = NULL;

	printList(head);

	push(head, 8);
	printList(head);

	push(head, 7);
	push(head, 3);
	push(head, 5);
	printList(head);

	pop(head);
	printList(head);

	free(head);

	_getch();
	return 0;
}