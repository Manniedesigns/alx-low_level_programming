#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string pointer to be passed
 *  Return: Returns length of the string
 */

int _strlen(char *s)
{
	int length;

	for (; *s != '\0'; s++)
	{
		length++;
	}

	return (length);
}
