#include "monty.h"
int condition(stack_t **stack, int i)
{
	if (((i == 2 || i == 3 || i == 4 || i == 5 || i == 6) && *stack == NULL)
	    || ((i == 4 || i == 5 || i == 6) && ((*stack)->next == NULL)))
		return (1);
	return (0);
}
