#include "monty.h"

/**
 * addnode - It adds node to head stack
 *
 * @head: The head stack
 * @n: The new_value
 *
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *_node, *ax;

	ax = *head;
	_node = malloc(sizeof(stack_t));
	if (_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = _node;
	_node->n = n;
	_node->next = *head;
	_node->prev = NULL;
	*head = _node;
}
