#include "monty.h"

/**
* f_queue - Sets the stack behavior to queue (FIFO).
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description: This function sets the stack behavior to queue (FIFO), meaning
* that `addnode` function will add elements to the end (tail) of the stack.
* It is used to implement a queue-like behavior with the stack.
*/
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}

/**
* addqueue - Adds a new node to the tail of the stack.
* @n: New value to add.
* @head: Pointer to the head of the stack.
*
* Description: This function adds a new node to the tail of the stack. It is
* used when the stack behavior is set to queue (FIFO) using `f_queue`.
*/
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
}
if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
aux->next = new_node;
new_node->prev = aux;
}
}

