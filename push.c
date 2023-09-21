#include "monty.h"
/**
 * push_s - adds an element to stack
 * @stack: double pointer to the stack
 * @token: double pointer to a character
 * @line_num: tracks number of the line
 * Return: EXIT_SUCCESS, or EXIT_FAILURE
 */
int push_s(stack_t **stack, char **token, unsigned int line_num)
{
	stack_t *new;
	int j = 0;

	if (token[1] == NULL)
		return (p_errors(0, line_num));
	while (token[1][j])
	{
		if (token[1][j] == '-' && j == 0)
		{
			j++;
			continue;
		}
		if (token[1][j] < '0' || token[1][j] > '9')
		{
			free_stack(stack);
			return (p_errors(0, line_num));
		}
		j++;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (user_error_message(0));
	new->n = atoi(token[1]);
	if ((*stack) != NULL)
		(*stack)->prev = new;
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
	return (EXIT_SUCCESS);
}
/**
 * push_q - adds element to a queue
 * @stack: double pointer to the stack
 * @token: double pointer to a character
 * @line_num: tracks number of the line
 * Return: EXIT_SUCCESS, or EXIT_FAILURE
 */
int push_q(stack_t **stack, char **token, unsigned int line_num)
{
	stack_t *new, *tmp = NULL;
	int j = 0;

	if (token[1] == NULL)
		return (p_errors(0, line_num));
	while (token[1][j])
	{
		if (token[1][j] == '-' && j == 0)
		{
			j++;
			continue;
		}
		if (token[1][j] < '0' || token[1][j] > '9')
		{
			free_stack(stack);
			return (p_errors(0, line_num));
		}
		j++;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (user_error_message(0));
	new->next = NULL;
	new->prev = NULL;
	new->n = atoi(token[1]);
	if (!stack || !(*stack))
	{
		(*stack) = new;
		return (EXIT_SUCCESS);
	}
	else
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
