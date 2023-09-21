#include "monty.h"
#define MAX_LINE_LENGTH 1024
/**
 * run_bytecodes - runs bytecodes script
 * @fd: describes a file
 * Return: EXIT_SUCCESS, or EXIT_FAILURE
 */
int run_bytecodes(FILE *fd)
{
	stack_t *stack = NULL;
	char *line = NULL, **token = NULL, delim[] = " \n\t\a\b";
	size_t len = 0, mode = 1;
	unsigned int line_num = 0, exit_status = EXIT_SUCCESS;

	while (getline(&line, &len, fd) != -1)
	{
		line_num++;
		if (empty_line(line, delim))
			continue;
		token = tokenize(line, delim);
		if (token[0][0] == '#' || strcmp(token[0], "nop") == 0)
		{
			free(token);
			continue;
		}
		else if (strcmp(token[0], "stack") == 0)
			mode = 1;
		else if (strcmp(token[0], "queue") == 0)
			mode = 0;
		else if (strcmp(token[0], "push") == 0 && mode == 0)
			exit_status = push_q(&stack, token, line_num);
		else if (strcmp(token[0], "push") == 0 && mode == 1)
			exit_status = push_s(&stack, token, line_num);
		else
			exit_status = execute(token, &stack, line_num);
		free(token);
		if (exit_status == EXIT_FAILURE)
			break;
	}
	free_stack(&stack);
	free(line);
	return (exit_status);
}
/**
 * tokenize - splits a line
 * @line: pointer to bytecode
 * @delim: pointer to token
 * Return: pointer to tokens
 */
char **tokenize(char *line, char *delim)
{
	char *tokens = NULL, **token = NULL;
	size_t bufsize = 0;
	int j = 0;

	if (line == NULL || !*line)
		return (NULL);
	bufsize = strlen(line);
	if (bufsize == 0)
		return (NULL);
	token = malloc(bufsize * sizeof(char *));
	if (token == NULL)
	{
		free(line);
		free(token);
		exit(user_error_message(0));
	}
	tokens = strtok(line, delim);
	if (tokens == NULL)
	{
		free(token);
		free(line);
		return (NULL);
	}
	while (tokens != NULL)
	{
		token[j] = tokens;
		j++;
		tokens = strtok(NULL, delim);
	}
	token[j] = '\0';
	return (token);
}
/**
 * empty_line - checks if a line contains a delimeter
 * @line: pointer to line
 * @delims: string having delimeter characters
 * Return: 1, or 0
 */
int empty_line(char *line, char *delims)
{
	int i, j;

	for (i = 0; line[i]; i++)
	{
		for (j = 0; delims[j]; j++)
		{
			if (line[i] == delims[j])
				break;
		}
		if (delims[j] == '\0')
			return (0);
	}
	return (1);
}
