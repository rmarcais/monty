#include "monty.h"
/**
 * _rotl - rotates the stack to the top.
 * @stack: The stack
 * @line_number: The line number
 * Return: Nothing.
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *tmp2;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	tmp = *stack;
       	tmp2 = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	*stack = (*stack)->next;
       	(*stack)->prev = NULL;
	tmp2->next = NULL;
       	tmp->next = tmp2;
	tmp2->prev = tmp;
}
