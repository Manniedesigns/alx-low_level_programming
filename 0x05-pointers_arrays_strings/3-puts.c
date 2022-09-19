#include "main.h"

/**
 * _puts - function that prints a string and a new line, to stdout.
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;

	for (; *str != '\0'; *str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
