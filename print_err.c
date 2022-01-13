#include "monty.h"
/**
 * print_err - prints an error message
 * @stack: The stack
 * @message: The message number
 * @ln: The line number
 * Return: Nothing.
 */
void print_err(stack_t **stack, int message, int ln)
{
	if (message == 2)
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
	else if (message == 3)
		fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
	else if (message == 4)
		fprintf(stderr, "L%d: can't swap, stack too short\n", ln);
	else if (message == 5)
		fprintf(stderr, "L%d: can't add, stack too short\n", ln);
	else if (message == 6)
		fprintf(stderr, "L%d: can't sub, stack too short\n", ln);
	else if (message == 7 && (*stack == NULL || (*stack)->next == NULL))
		fprintf(stderr, "L%d: can't div, stack too short\n", ln);
	else if (message == 7 && (*stack)->n == 0)
		fprintf(stderr, "L%d: division by zero\n", ln);
	else if (message == 8)
		fprintf(stderr, "L%d: can't mul, stack too short\n", ln);
	else if (message == 9 && (*stack == NULL || (*stack)->next == NULL))
		fprintf(stderr, "L%d: can't mod, stack too short\n", ln);
	else if (message == 9 && (*stack)->n == 0)
		fprintf(stderr, "L%d: division by zero\n", ln);
	else if (message == 10 && (*stack) == NULL)
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ln);
	else if (message == 10)
		fprintf(stderr, "L%d: can't pchar, value out of range\n", ln);
	else
		return;
}
