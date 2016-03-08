/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){

	struct node* ptr = (struct node *)malloc(sizeof(struct node));
	ptr = head;
	int countZero=0, countOne=0, countTwo=0;

	while (ptr){

		if (ptr->data == 0){
			countZero++;
		}
		else if (ptr->data == 1){
			countOne++;
		}
		else if (ptr->data == 2){
			countTwo++;
		}
		ptr = ptr->next;
	}

	ptr = head;
	int i;
	for (i = 0; i<countZero; i++){
		ptr->data = 0;
		ptr = ptr->next;
	}
	for (i = 0; i<countOne; i++){
		ptr->data = 1;
		ptr = ptr->next;
	}
	for (i = 0; i<countTwo; i++){
		ptr->data = 2;
		if (ptr->next != NULL)
			ptr = ptr->next;
		else
			break;
	}
}