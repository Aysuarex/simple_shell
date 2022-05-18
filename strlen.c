#include "shell.h"
/**
 * _strlen - Sizes the length of a string
 * @string: String to be sized
 * Return: The length ot the string
 */

int _strlen(const char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);

	while (string[length] != '\0')
		length++;
	return (length);
}
