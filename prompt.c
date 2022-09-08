#include "shell.h"

/**
 * prompt - display a prompt to stdout
 * Return: int
 */
int prompt(void)
{
	const char *prom = "#cisfun$ ";
	return (fputs(prom, stdout));
}
