#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)              

typedef struct Node {
	char value;
	struct Node *next;
}Node;

printList(Node *head) {
	while (head) {
		printf("%c%s", head->value, (head->next) ? " " : "\n");
		head = head->next;
	}
}

void createNode(Node *head, char a) {
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));

	newNode->value = head->value;
	head->value = a;

	newNode->next = head->next;
	head->next = newNode;
}

void reverseWord(char* word) {
	Node *head;
	head = (Node *)malloc(sizeof(Node));
	head->value = word[0];
	head->next = NULL;

	int i, x;
	x = strlen(word);
	for (i = 0; i < x; i++) {
		createNode(head, word[i + 1]);
	}

	puts("Reversed word is:");
	printList(head);
}

int main(int argc, char *argv[]) {

	char *word;

	word = (char *)malloc(100);

	gets_s(word, 100);

	reverseWord(word);

	_getch();
	return 0;
}