#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <sys/stat.h>


int built_in(char *strtocmp, char **env);
void handle_sigint(int sig);
char *read_line(void);
int execute(char **pathname);
char **toktok(char *buffer);
int _atoi(char *s);
void freezer(char **token, char *string);
void _printenv(char **env);
char **path_finder(char **token_path, char **env_path, char *stringet);
char *_strcat(char *dest, char *src);
int childhood(char **token, char *av[], char **env, char *string);
int _strcmp(char *s1, char *s2);
void shell_exit(char *token);

#endif /* _SHELL_H_ */
