/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr = head;
	int temp = K;
	int i = 1;

	if (head == NULL)
		return NULL;

	if (K == 1 || K == 0)
		return NULL;

	if (K < 0)
		return NULL;

	while (ptr){

		if (i == temp - 1 && ptr->next != NULL){
			ptr->next = ptr->next->next;
			temp = temp + K - 1;

		}
		ptr = ptr->next;
		i++;
	}

	return head;
	
}