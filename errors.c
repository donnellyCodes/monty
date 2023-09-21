#include "monty.h"
/**
 * user_error_message - prints errors message if file does not exist
 * @e: the type of error
 * Return: EXIT_FAILURE
 */
int user_error_message(int e)
{
	char *errors[2] = {"Error: malloc failed", "USAGE: monty file"};

	fprintf(stderr, "%s\n", errors[e]);
	return (EXIT_FAILURE);
}
/**
 * open_error_message - prints error message when file fails to open
 * @fName: name of the file
 * Return: EXIT_FAILURE
 */
int open_error_message(char fName)
{
	fprintf(stderr, "Error: Can't open file %s\n", fName);
	return (EXIT_FAILURE);
}
/**
 * p_errors - prints errors
 * @e: index to the error type
 * @line_num: numbe of lines with an error
 * Return: EXIT_FAILURE
 */
int p_errors(int e, unsigned int line_num)
{
	char *errors[] = {"usage: push integer", "can\'t pint, stack empty",
		"can\'t pop an empty stack", "can\'t swap, stack too short",
		"can\'t add, stack too short", "can\'t sub, stack too short",
		"can\'t div, stack too short", "division by zero",
		"can\'t mul, stack too short", "can\'t mod, stack too short",
		"can\'t pchar, value out of range", "can\'t pchar, stack empty"
		};
	fprintf(stderr, "L%d: %s\n", line_num, errors[e]);
	return (EXIT_FAILURE);
}
