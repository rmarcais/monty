#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 * @stack: The stack
 * @line_number: the line number
 * Return: Nothing.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	printf("%d\n", (*stack)->n);
}
