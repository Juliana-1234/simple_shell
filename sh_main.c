#include "shell.h"

/**
 * main - Entry point / run the shell!
 * @ac: - Number of arguments passed to the program.
 * @av: - One-dimensional array of strings - "arguments".
 * @env: - Null terminated array of strings - "environment".
 *
 * Return: 0
 */

int main(int ac, char *av[], char **env)
{
	char *string = NULL, **token;
	int flagsc = 0;
	(void)ac;

	signal(SIGINT, handle_sigint);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		string = read_line();
		if (*string == '\n')
		{
			free(string);
			continue;
		}

		flagsc = built_in(string, env);
		if (flagsc == 1)
			continue;
		token = NULL;
		token = toktok(string);
		if (token[0] == NULL)
		{
			freezer(token, string);
			continue;
		}
		childhood(token, av, env, string);
		wait(NULL);
	}
	return (0);
}

/**
 * freezer - Function that frees the memory allocated by the program.
 * @token: Array of pointers that stores the tokens.
 * @string: Pointer that stores the input from the keyboard.
 *
 * Return: Nothing
 */
void freezer(char **token, char *string)
{
	free(string);
	free(token);
}
