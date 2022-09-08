#include "shell.h"

/**
 * _fork - fork the current process
 * Return: the process id if successful or -1
 */
int _fork(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
		return (-1);

	return (pid);
}
