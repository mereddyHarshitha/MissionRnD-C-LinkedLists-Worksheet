/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	struct node *current = (struct node*)malloc(sizeof(struct node));
	ptr = head;
	current = head;
	int temp;

	if (head == NULL)
		return NULL;

	while (ptr){
		current = head;
		while (current->next != NULL){
			if (current->num > current->next->num){

				temp = current->num;
				current->num = current->next->num;
				current->next->num = temp;
			}
			current = current->next;
		}
		ptr = ptr->next;
	}
	return head;
}