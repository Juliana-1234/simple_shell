#include "shell.h"

void _getline(char *buf)
{
	size_t n = 10;
	int val = getline(&buf, &n, stdin);
	if (val == -1)
		exit(1);
}
