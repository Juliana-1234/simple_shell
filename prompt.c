#include "shell.h"

int prompt(void)
{
	const char *prom = "#cisfun$ ";
	return (fputs(prom, stdout));
}
