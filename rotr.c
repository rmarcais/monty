#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	tmp->next = *stack;
	tmp->prev = NULL;
	*stack = tmp;
}
