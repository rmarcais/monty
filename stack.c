#include "monty.h"
/**
 * add_dnode - adds a new node on the top of a stack
 * @stack: the stack
 * @line_number: the line number
 * Return: Nothing.
 */
void add_dnode(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL || stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = line_number;
	new->next = *stack;
	new->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
