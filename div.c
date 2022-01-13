#include "monty.h"
/**
 * _div - devides the second top element of the stack by the top element.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	(void)line_number;

	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
	(*stack)->n = second / first;
}
