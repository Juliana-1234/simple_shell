#include "shell.h"

/**
 * shell_exit - A function that exits the shell.
 * @token: The pointer to tokenized command.
 * Return: Nothing.
 */

void shell_exit(char *token)
{
	int status = 0;

	if (token == NULL)
	{
		free(token);
		exit(EXIT_SUCCESS);
	}
	status = _atoi(token);
	free(token);
	exit(status);
}
