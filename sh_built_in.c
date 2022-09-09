#include "shell.h"

/**
 * built_in - function that compares two strings and execute the built-in.
 * @strtocmp: String to compare.
 * @env_link: link to environ.
 *
 * Return: 0
 */

int built_in(char *strtocmp, char **env_link)
{
	int i = 0, temp = 0;
	char *esc = "exit", *e_var = "env";

	while (strtocmp[i] && esc[i])
	{
		if (strtocmp[i] != esc[i])
			temp = strtocmp[i] - esc[i];
		i++;
	}
	if (temp == 0)
	{
		free(strtocmp);
		exit(EXIT_SUCCESS);
	}
	else
	{
		i = 0;
		temp = 0;
		while (strtocmp[i] && e_var[i])
		{
			if (strtocmp[i] != e_var[i])
				temp = strtocmp[i] - e_var[i];
			i++;
		}
		if (temp == 0)
		{
			_printenv(env_link);
			free(strtocmp);
			return (1);
		}
	}
	return (0);
}
