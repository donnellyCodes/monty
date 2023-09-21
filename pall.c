#include "monty.h"
/**
 * pall_s - prints value of stack_t
 * @stack: double pointer to stack_t
 * @line_num: tracks number of the line
 * Return: o
 */
void pall_s(stack_t **stack, unsigned int line_num)
{
	stack_t *tmp = *stack;
	(void)line_num;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
