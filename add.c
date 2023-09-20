#include "monty.h"

/**
 * f_add - It adds top two elements of stack
 *
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int lon = 0, ax;

	h = *head;
	while (h)
	{
		h = h->next;
		lon++;
	}
	if (lon < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ax = h->n + h->next->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
