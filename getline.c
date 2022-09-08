#include "shell.h"

/**
 * _getline - function to read a line
 * Return: Nothing
 */
void _getline(char *c)
{
	size_t n = 10;
	int val = getline(&c, &n, stdin);

	if (val == -1)
		exit(1);
}
