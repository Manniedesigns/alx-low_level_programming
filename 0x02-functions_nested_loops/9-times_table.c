#include "main.h"

/**
 * times_table - times table function
 *
 * Description: Prints 9 times table from zero
 *
 * Return: Always returns nothing (void)
 */

void times_table(void)

{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		int prod = j * i;

		if (j == 0)
		{
			_putchar('0');
		}
		else if (prod <= 9)
		{
			putchar(',');
			putchar(' ');
			_putchar(' ');
			_putchar(prod + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
		}
	}
	_putchar('\n');
}
