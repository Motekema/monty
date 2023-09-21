#include "monty.h"

/**
* f_pop - Removes the top element from the stack.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: This function removes the top element from the stack.
* If the stack is empty, it prints an error message and exits.
* The removed element is freed to prevent memory leaks.
*/
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *temp;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
*head = temp->next;
free(temp);
}
