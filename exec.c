#include "shell.h"
/**
 * exec - Creates a new child process,
 * executes a command and wait for the child process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int exec(char **arguments)
{
	pid_t pid = 0;/**Child process id*/
	int stat = 0, exe_stat = 0;/**indicates the status of the child process*/

	pid = fork();/**Create a child process*/
	if (pid == -1)/**Failed to create*/
		_printp("failed\n", 7);
	else if (pid == 0)/**He is the son...*/
	{
		exe_stat = execve(arguments[0], arguments, environ);/**Run the command*/
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		} /**Finish the child process successfully*/
		exit(0);
	}
	else /**He is the father*/
		wait(&stat);/**Stops the execution of the parent until the child ends*/
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
	}
