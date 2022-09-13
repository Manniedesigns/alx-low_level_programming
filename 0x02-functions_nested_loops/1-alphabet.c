#include "main.h"

/**
 * main - entry point
 *
 * Description: A funtion that prints the alphabets in lowercase
 *
 * Return: Always returns 0 (*success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
	return (0);
}
