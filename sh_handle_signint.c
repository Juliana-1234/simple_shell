#include "shell.h"

/**
 * handle_sigint - Signal Handler - Interrupt the process / ctrl + C.
 * @sig: Received signal.
 *
 * Return: Nothing.
 */
void handle_sigint(int __attribute__((unused)) sig)
{
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);
}
