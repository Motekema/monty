#include "monty.h"

/**
* f_pstr - Prints a string starting from the top of the stack.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: function prints a string starting from the top of the stack.
* It continues printing characters until it reaches a null byte (0) or a
* character with a value greater than 127. The newline character is not
* printed.
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *current;
(void)counter;

current = *head;
while (current != NULL && current->n > 0 && current->n <= 127)
{
putchar(current->n);
current = current->next;
}

putchar('\n');
}
