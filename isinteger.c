#include "monty.h"
/**
 * isinteger - checks if a variable is an integer
 * @s: The variable
 * @ln: the line number
 * Return: -1 or 1.
 */
int isinteger(char *s, int ln)
{
	int i = 0;

	if (s == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", ln);
		return (-1);
	}
	if (s[0] == '-')
		i = 1;
	for (; s[i]; i++)
	{
		if (isdigit(s[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", ln);
			return (-1);
		}
	}
	return (1);
}
