#include "shell.h"
/**
 * main - This is a simple shell created by
 * for ALX Team Project
 * Return: 0 if success
 */
int main(void)
{
	ssize_t bytes_rd = 0; /** Bytes read from a getline*/
	size_t bf_size = 0; /**Buffer size*/
	char *entry = NULL, *arguments[20]; /**String of args that enters the usr*/
	int counter = 1, vf_stat = 0, exist_stat = 0, exit_stat = 0, blt_stat = 0;

	_printp("$ ", 2);/**prompt mini-shell*/
	bytes_rd = getline(&entry, &bf_size, stdin); /**sizeof entry, o -1 (EOF))*/
	while (bytes_rd != -1)
	{
		if (*entry != '\n')
		{
			fill_args(entry, arguments);
			if (arguments[0] != NULL)
			{
				exist_stat = exist(arguments[0]);/**Exist evaluates if the path entered exists*/
				if (exist_stat != 0)/**Did not find the file*/
				{
					vf_stat = verify_path(arguments);
					if (vf_stat == 0)
						exit_stat = exec(arguments), free(entry), free(*arguments);
					else
					{
					blt_stat = verify_blt(arguments, exit_stat);
					if (blt_stat != 0)
						exit_stat = print_not_found(arguments, counter), free(entry);
					}
				}
				else /**Found the file*/
					exit_stat = exec(arguments), free(entry);
			}
			else
				free(entry);
		}
		else if (*entry == '\n')
			free(entry);
		entry = NULL, counter++;
		_printp("$ ", 2), bytes_rd = getline(&entry, &bf_size, stdin);
	}
	last_free(entry);
	return (exit_stat);
}
