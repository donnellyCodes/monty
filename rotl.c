#include "monty.h"
/**
 * rotl_s - rotates the stack to the top
 * @stack: double pointer  to the stack
 * @line_number: curent line of bytecodes
 */
void rotl_s(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *cursor = *stack;
	(void)line_number;

	if (*stack)
	{
		temp = cursor->n;
		while (cursor->next != NULL)
		{
			cursor->n = cursor->next->n;
			cursor = cursor->next;
		}
		cursor->n = temp;
	}
}
