#include "monty.h"
/**
 * _sub - substracts the top element of the stack from the second top element.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	(void)line_number;

	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
	(*stack)->n = second - first;
}
