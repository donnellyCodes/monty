#include "monty.h"
/**
 * rotr_s - rotates the stack to the bottom
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void rotr_s(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *cursor = *stack;
	(void)line_number;

	if (*stack)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		temp = cursor->n;
		while (cursor->prev != NULL)
		{
			cursor->n = cursor->prev->n;
			cursor = cursor->prev;
		}
		cursor->n = temp;
	}
}
