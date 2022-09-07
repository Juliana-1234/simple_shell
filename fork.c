#include "shell.h"

int _fork()
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
		return (-1);

	return (pid);
}
