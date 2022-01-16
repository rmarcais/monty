#include "monty.h"
/**
 * _push - pushes a new node
 * @stack: the stack
 * @line_number: the line number
 * Return: Nothing.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	if (stack_or_queue == 0)
		add_dnode(stack, line_number);
	else
		add_dnodeint_end(stack, line_number);
}
