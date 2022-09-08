#include "shell.h"

/**
 * _atoi - convert a string to int
 * @s: string to convert
 *
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0, i = 0;
	int sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	if (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - '0');
			i++;
		}
	}
	sign *= -1;

	return (sign * result);
}
