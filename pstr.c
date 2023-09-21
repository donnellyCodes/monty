#include "monty.h"
/**
 * pstr_s - prints string from the top of the stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void pstr_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}
	while (tmp != NULL)
	{
		if (tmp->n > 0 && tmp->n <= 127)
		{
			printf("%c", tmp->n);
			tmp = tmp->next;
		}
		else
			break;
	}
	printf("\n");
}
