#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string pointer to be passed
 *  Return: Returns length of the string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
	}

	return (length);
}
