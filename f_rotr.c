#include "monty.h"

/**
* f_rotr - Rotates the stack to the bottom.
* @head: Pointer to the head of the stack.
* @counter: Line number (unused).
*
* Description: This function rotates the stack to the bottom by moving the top
* element to the bottom while keeping the order of the other elements. If the
* stack is empty or has only one element, it does nothing.
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copys;

copys = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copys->next)
{
copys = copys->next;
}
copys->next = *head;
copys->prev->next = NULL;
copys->prev = NULL;
(*head)->prev = copys;
(*head) = copys;
}
