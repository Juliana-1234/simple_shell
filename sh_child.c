#include "shell.h"

/**
 * childhood - Function that creates a child and execute the command received.
 * @token: Array of pointers to tokens (commands and arguments)
 * @av: Argument received with the name of our shell.
 * @env: Environ.
 * @string: String given by the getline funcion (stdin)
 *
 * Return: 0
 */
int childhood(char **token, char *av[], char **env, char *string)
{
	pid_t child;

	child = fork();
	if (child < 0)
	{
		perror(av[0]);
		exit(1);
	}
	else if (child == 0)
	{
		if (execve(token[0], token, env) < 0)
		{
			perror(av[0]);
			freezer(token, string);
			exit(127);
		}
	}
	else
		wait(NULL);
	freezer(token, string);
	return (0);
}
