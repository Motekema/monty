#include "monty.h"

/**
 * f_pchar - It prints char at top of the stack and
 * followed by new line
 *
 * @head: The stack head
 * @counter: The line_number
 *
 * Return: There is no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *he;

	he = *head;
	if (!he)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (he->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", he->n);
}
