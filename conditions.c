#include "monty.h"
/**
 * condition - tests conditions
 * @stack: The stack
 * @i: the iteration in the for loop of parseline.c
 * Return: 0 or 1
 */
int condition(stack_t **stack, int i)
{
	if (((i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 ||
		     i == 8 ||i == 9) && *stack == NULL) ||
	    ((i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9)
	     && ((*stack)->next == NULL)) ||
	    ((i == 7 || i ==9) && (*stack)->n == 0))
		return (1);
	return (0);
}
