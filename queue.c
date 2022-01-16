#include "monty.h"
/**
 * add_dnodeint_end - adds a new node at the end of a stack
 * @stack: the stack
 * @line_number: The line number
 * Return: Nothing.
 */
void add_dnodeint_end(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *last = *stack;

	if (new == NULL || stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = line_number;
	new->next = NULL;
	if ((*stack) == NULL)
	{
		new->prev = NULL;
		*stack = new;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
}
