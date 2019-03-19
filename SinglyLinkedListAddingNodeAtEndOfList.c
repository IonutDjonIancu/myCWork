#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// singly linked lists

// creating a linked list node
// typedef is used to create a type of data
typedef struct Node {
	int data;
	struct Node *next;
} Node;

// this function will print a singly linked list
void printList(Node *n) {
	while (n) {
		printf("%d ", n->data);
		n = n->next;
	}
	puts("");
}

// adding a node at the end of a list
void createNode(Node *head, int value) {

	Node *current = head;
	while (current->next) {
		current = current->next;
	}

	current->next = (Node *)malloc(sizeof(Node));
	current->next->data = value;
	current->next->next = NULL;
}






int main(int argc, char *argv[]) {

	// creating a simple linked list with 3 nodes

	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;

	head = (Node *)malloc(sizeof(Node));
	second = (Node *)malloc(sizeof(Node));
	third = (Node *)malloc(sizeof(Node));
	// three nodes have been allocated dynamically 
	// data is garbage because we haven't allocated anything yet

	head->data = 1; // this assigns data in the first node
	head->next = second; // this links the first node to the second as the address pointer of the first node will now contain the address of the second node

	second->data = 2; // assingning data to the second node
	second->next = third; // linking second node to the third

	third->data = 3; // assigning data to the third node
	third->next = NULL; // third node points to null ending the chain of blocks and the list

	// printing a list will have to always begin with the first node
	printList(head);

	createNode(head, 5);

	printList(head);





	_getch();
	return 0;
}