#include "shell.h"
/**
 * _strdup - Duplicates a string
 * @str: String to be duplicated
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = (char *) malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
