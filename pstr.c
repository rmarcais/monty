#include "monty.h"
/**
 * _pstr - prints all the elements of a stack, starting from the top
 * @stack: The stack
 * @line_number: the line number
 * Return: Nothing.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (*stack == NULL)
	{
		printf("\n");
		return;
	}
	while (tmp != NULL)
	{
		if (tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
		{
			printf("%c", tmp->n);
			tmp = tmp->next;
		}
		else
			break;
	}
	printf("\n");
}
