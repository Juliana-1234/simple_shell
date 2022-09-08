#include "shell.h"

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	pid_t pid;
	char ch;
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);
	prompt();
	//getline(&buf, &n, stdin);
	//char *n = _getline();
	_getline(buf, n);
	char *str = malloc(sizeof(char) * strlen(buf));
	char *new[] = malloc(sizeof(char) * strlen(buf));
	strcpy(str, buf);
	strcat(new, str);

	while (1)
	{
		char cmd[] = &new;
		char *argv[] = {"", NULL};
		char *envp[] = {NULL};

		if (fork() == 0)
		{
			int val = execve(cmd, argv, envp);
			if (val == -1)
				perror("./shell");
		}
		else
			wait(NULL);
		prompt();
		_getline(buf, n);
		//int v = getline(&buf, &n, stdin);
		//if (v == -1)
		//	exit(2);
	}
	free(buf);
	return (0);
}
