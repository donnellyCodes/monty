#include "monty.h"
/**
 * pop_s - removes top value from stack
 * @stack: double pointer to the stack
 * @line_number: current line bytecodes
 */
void pop_s(stack_t **stack, unisigned int line_number)
{
	stack *temp = *stack;

	if (!temp)
	{
		p_errors(2, line_number);
		exit(EXIT_FAILURE) :
	}
	if (temp->next)
		temp->next->prev = temp->next;
	*stack = temp->next;
	free(temp);
}
