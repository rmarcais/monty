#include "monty.h"
/**
 * _add - adds the top two elements of the stack.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	(void)line_number;

	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
	(*stack)->n = first + second;
}
