#include "monty.h"
/**
 * main - entry point of monty
 * @argc: number of arguments
 * @argv: points to an array
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fd = NULL;
	int exit_status = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error_message(1));
	fd = fopen(argv[1], "r");
	if (fd == NULL)
		return (open_error_message(argv[1]));
	exit_status = run_bytecodes(fd);
	fclose(fd);
	return (exit_status);
		open_error_message(argv[1]);
	run_bytecodes(fd);
	exit(EXIT_SUCCESS);
	return (0);
}
