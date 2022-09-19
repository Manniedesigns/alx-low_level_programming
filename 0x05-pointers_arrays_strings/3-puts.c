#include "main.h"

/**
 * _puts - function that prints a string and a new line, to stdout.
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
