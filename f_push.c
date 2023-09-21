#include "monty.h"

/**
* f_push - Pushes an integer onto the stack.
* @head: Pointer to the head of the stack.
* @counter: Line number.
*
* Description:function pushes an integer onto the stack. It checks if the
* argument provided a valid integer, and if not, it prints an error message
* and exits with an error status. The function can be used to either add the
* integer to the top of the stack or to the bottom of the stack, depending on
* the value of `bus.lifi`.
*/
void f_push(stack_t **head, unsigned int counter)
{
int n, j = 0, flag = 0;

if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > '9' || bus.arg[j] < '0')
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
n = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);
}
