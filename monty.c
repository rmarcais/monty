#include "monty.h"
/**
 * main - interpreter for Monty ByteCodes files
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int stack_or_queue = 0;
int main(int argc, char **argv)
{
	FILE *fp;
	size_t len = 0;
	ssize_t read;
	char *line = NULL;
	stack_t *list = NULL;
	int line_nb = 1, a;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fp)) != -1)
	{
		a = parseline(&list, line, line_nb);
		if (a == -1)
		{
			line_nb++;
			continue;
		}
		if (a == 0)
			break;
		line_nb++;
	}
	fclose(fp);
	if (line)
		free(line);
	free_stack(&list, line_nb);
	if (a == 0)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
	return (0);
}
