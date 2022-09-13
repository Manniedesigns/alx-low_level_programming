#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints the string _putchar as output
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');
	return (0);
}
