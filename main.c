#define _GNU_SOURCE

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - The monty code interpr
*
* @argc: The number of arguments
* @argv: The monty file location
*
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t _size = 0;
	ssize_t _read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (_read_line > 0)
	{
		content = NULL;
		_read_line = getline(&content, &_size, file);
		bus.content = content;
		counter++;
		if (_read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
