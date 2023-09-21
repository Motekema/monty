#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - It doubly linked list representation of stack (or queue)
 *
 * @n: The integer
 * @next: The points to next element of the stack (or queue)
 * @prev: The points to previous element of the stack (or queue)
 *
 * Description: The doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *next;
	struct stack_s *prev;
} stack_t;
/**
 * struct bus_s - The variables - args, file, line content
 *
 * @arg: The value
 * @file: The pointer monty file
 * @content: The line content
 * @lifi: The flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	char *content;
	FILE *file;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - The opcode and function
 *
 * @opcode: Opcode
 * @f: The function to handle opcode
 *
 * Description: The opcode and function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void f_push(stack_t **head, unsigned int number);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addqueue(stack_t **head, int n);
void addnode(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif
