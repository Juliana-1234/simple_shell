#include "shell.h"

/**
 * read_line - Function that reads the standard input and stores the info
 * in a string
 *
 * Return: A pointer to the string.
 */

char *read_line(void)
{
	int bytes_read;
	char *buffer = NULL;
	size_t size = 1024;

	bytes_read = getline(&buffer, &size, stdin);
	if (isatty(STDIN_FILENO) != 0 && bytes_read == EOF)
		write(STDOUT_FILENO, "\n", 1);
	if (bytes_read < 0)
	{
		free(buffer);
		exit(0);
	}
	return (buffer);
}
