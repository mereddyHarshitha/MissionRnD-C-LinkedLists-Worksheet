/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	
	int rem;
	struct node* head = NULL;

	if (N == 0){

		struct node* ptr = (struct node*)malloc(sizeof(struct node));
		ptr->num = 0;
		ptr->next = NULL;
		head = ptr;
	}

	if (N<0)
		N = -N;

	while (N){

		struct node* ptr = (struct node*)malloc(sizeof(struct node));
		rem = N % 10;
		N = N / 10;
		ptr->num = rem;
		ptr->next = head;
		head = ptr;
	}
	return head;
}