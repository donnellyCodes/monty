#include "monty.h"
/**
 * pop_s - removes top value from stack
 * @stack: double pointer to the stack
 * @line_number: current line bytecodes
 */
void pop_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		p_errors(2, line_number);
		exit(EXIT_FAILURE);
	}
	if (tmp->next)
		tmp->next->prev = tmp->next;
	*stack = tmp->next;
	free(tmp);
}
