#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 0 to 9
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
