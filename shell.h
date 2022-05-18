#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

int _strcmp(char *str1, char *str2);
int verify_path(char **arguments);
char *_strdup(char *str);
char *append_command(char *dir_path, char *command);
int exec(char **arguments);
int fill_args(char *entry, char **arguments);
int print_numbers(int n);
int _strlen(const char *string);
int print_not_found(char **arguments, int counter);
char *_getenv(char *global_var);
int _printp(const char *prompt, unsigned int size);
int _putchar(char c);
int exist(char *pathname);
void free_grid(char **grid, int heigth);
void last_free(char *entry);
int verify_blt(char **arguments, int exit_stat);

#endif

