#include "monty.h"

/**
 * f_div - It divides top two elements of stack
 *
 * @head: The stack head
 * @counter: The line_number
 *
 * Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = h->next->n / h->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}
