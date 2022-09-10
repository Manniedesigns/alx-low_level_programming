#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single numbers separated by commas
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
