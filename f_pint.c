#include "monty.h"

/**
* f_pint - Prints the value at the top of the stack.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: This function prints the value at the top of the stack.
* If the stack is empty, it prints an error message and exits.
*/
void f_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can not pint, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
