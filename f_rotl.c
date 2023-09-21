#include "monty.h"

/**
* f_rotl - Rotates the stack to the top.
* @head: Pointer to the head of the stack.
* @counter: Line number (unused).
*
* Description: This function rotates the stack to the top by moving the top
* element to the bottom while keeping the order of the other elements. If the
* stack is empty or has only one element, it does nothing.
*/
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tmps = *head, *aux;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;
while (tmps->next != NULL)
{
tmps = tmps->next;
}
tmps->next = *head;
(*head)->next = NULL;
(*head)->prev = tmps;
(*head) = aux;
}

