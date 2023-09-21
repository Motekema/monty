#include "monty.h"

/**
 * f_stack - Sets the stack behavior to stack (LIFO).
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 *
 * Description: This function sets the stack behavior to stack (LIFO), meaning
 * that the `addnode` function will add elements to the top of the stack.
 * It is used to implement a stack-like behavior with the stack.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
