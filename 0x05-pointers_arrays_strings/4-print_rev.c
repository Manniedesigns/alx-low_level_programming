#include "main.h"

/**
 * print_rev - function that prints a string, in reverse and a new line.
 * @s; string to manipulate
 */
 
void print_rev(char *s)
{
	int i, j;

	i = strlen(s);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
