#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
