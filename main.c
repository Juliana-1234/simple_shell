#include "shell.h"

int main(void)
{
	char cmd[100], *command = NULL, *parameters[20];

	char *envp[] = {"PATH=/bin", 0};
	char *argv[] = {"ls", NULL};
	size_t n = 10;
	while (1)
	{
		prompt();
		if (getline(&command, &n, stdin) == -1) return (-1);
		//scanf("%s", command);
		if (_fork() != 0)
			wait(NULL);
		else
		{
			strcpy(cmd, command);
			//strcpy(cmd, "/bin/ls");
			//strcat(cmd, command);
			int val = execve(cmd, argv, envp);
			if (val == -1)
				perror("./shell");
			//execve(cmd, argv, envp);
		}
		if (strcmp (command, "exit") == 0)
			break;
		//free(command);
	}
	free(command);
	return (0);
}
