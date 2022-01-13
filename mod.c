#include "monty.h"
/**
 * _mod - computes the rest of the division of the second top el by the top el.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	(void)line_number;

	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
	(*stack)->n = second % first;
}
