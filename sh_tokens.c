#include "shell.h"

/**
 * toktok - Who's there? a string who needs to be tokenize! / Function that
 * splits a string into tokens.
 * @buffer: Pointer to the string who knocks the door.
 *
 * Return: Bi-dimensional array of pointers to the tokens
 */

char **toktok(char *buffer)
{
	char *token, **subtoken;
	int i = 0;

	subtoken = malloc(sizeof(char *) * 64);
	if (subtoken == NULL)
	{
		freezer(subtoken, buffer);
		perror("$");
		exit(1);
	}
	token = strtok(buffer, " \n\t\r\a");
	if (token == NULL)
	{
		perror("$");
		freezer(subtoken, buffer);
		exit(1);
	}
	while (token != NULL)
	{
		subtoken[i] = token;
		i++;
		token = strtok(NULL, " \n\t\r\a");
	}
	subtoken[i] = '\0';
	return (subtoken);
}
