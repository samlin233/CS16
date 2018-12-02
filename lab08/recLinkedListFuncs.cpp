#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
	int sum = 0
	if(!head)
		return 0;
	recursiveSum(head->next);
	sum += head->data;
	return sum;
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
	int max = 0;
	if(!head)
		return;
	recursiveLargestValue(head->next);
	if(head->data > max)
		max = head->data;
	return max;
}
