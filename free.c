#include "monty.h"
/**
 * s_free -  used to free the stack
 * @stack: double pointer to the stack
 * Return: 0
 */
void s_free(stack_t **stack)
{
	stack_t *temp = *stack;

	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
