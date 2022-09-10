#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: Always returns 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
