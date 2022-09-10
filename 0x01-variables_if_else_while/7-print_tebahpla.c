#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase letters in reverse
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
