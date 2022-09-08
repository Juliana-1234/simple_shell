#include "shell.h"

/**
 * _printenv - prints the environ.
 * @env: environ.
 *
 * Return: Nothing
 */

void _printenv(char **env)
{
	int leng = 0, i = 0;

	while (env[i] != NULL)
	{
		while (env[i][leng] != '\0')
			leng++;
		write(STDOUT_FILENO, env[i], leng);
		write(STDOUT_FILENO, "\n", 1);
		i++;
		leng = 0;
	}
}
