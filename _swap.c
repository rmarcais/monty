#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: The stack
 * @line_number: The line number
 * Return: 1 or -1.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int first = (*stack)->n;
	int second = (*stack)->next->n;
	(void)line_number;

	(*stack)->n = second;
	(*stack)->next->n = first;
}
