#include "monty.h"

/**
* f_swap - Swaps the top two elements of the stack.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: function swaps the values of the top two elements of the stack.
* If there are not enough elements on the stack,print an error msg and exits.
*/
void f_swap(stack_t **head, unsigned int counter)
{
stack_t *he;
int len = 0, aux;

he = *head;
while (he)
{
he = he->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can not swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
he = *head;
aux = he->n;
he->n = he->next->n;
he->next->n = aux;
}

