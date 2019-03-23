#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

// binary tree

typedef struct Node {
	int value;
	struct Node *leftNext;
	struct Node *rightNext;
} Node;

Node *createNode(int data) {

	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->value = data;

	newNode->leftNext = NULL;
	newNode->rightNext = NULL;

	return newNode;
}

void printPostOrder(Node *node) {

	if (!node) {
		return;
	}

	printPostOrder(node->leftNext);
	printPostOrder(node->rightNext);
	printf("%d ", node->value);

}

int main(int argc, char *argv[]) {

	Node *root = createNode(1);
	root->leftNext = createNode(2);
	root->rightNext = createNode(3);

	root->leftNext->leftNext = createNode(4);

	printPostOrder(root);
	


	_getch();
	return 0;
}