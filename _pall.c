#include "monty.h"
/**
 * print_stack - prints all the elements of a stack, starting from the top
 * @stack: The stack
 * @line_number: the line number
 * Return: Nothing.
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (*stack == NULL)
		return;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
