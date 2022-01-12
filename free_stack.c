#include "monty.h"
/**
 * free_stack - frees a stack
 * @stack: The stack
 * @line_number: the line number
 * Return: Nothing.
 */
void free_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	if (*stack != NULL)
		while (*stack != NULL)
		{
			tmp = *stack;
			*stack = (*stack)->next;
			free(tmp);
		}
}
