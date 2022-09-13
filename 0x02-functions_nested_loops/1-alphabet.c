#include "main.h"

/**
 * main - entry point
 *
 * Description: A funtion that prints the alphabets in lowercase
 *
 * Return: Always returns void (nothing)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
