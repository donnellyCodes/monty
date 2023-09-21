#include "monty.h"
/**
 * s_free -  used to free the stack
 * @stack: double pointer to the stack
 * Return: 0
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
