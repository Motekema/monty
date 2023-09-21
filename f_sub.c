#include "monty.h"

/**
* f_sub - Subtracts the top element of the stack from the second top element.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: This function subtracts the top element of the stack from the
* second top element. It then replaces the second top element with the result.
* If there are not enough elements on stack, print an error message and exits.
*/
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int difference, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
difference = aux->next->n - aux->n;
aux->next->n = difference;
*head = aux->next;
free(aux);
}

