#include "monty.h"

/**
* free_stack - It frees doubly linked list
*
* @head: The head stack
*/
void free_stack(stack_t *head)
{
	stack_t *ax;

	ax = head;
	while (head)
	{
		ax = head->next;
		free(head);
		head = ax;
	}
}
