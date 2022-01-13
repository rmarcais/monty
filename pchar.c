#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack.
 * @stack: The stack
 * @line_number: the line number
 * Return: Nothing.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	printf("%c\n", (*stack)->n);
}
