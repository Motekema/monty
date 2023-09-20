#include "monty.h"

/**
 * f_pall - It prints stack
 *
 * @head: The stack head
 * @counter: It has no used
 *
 * Return: It has no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
