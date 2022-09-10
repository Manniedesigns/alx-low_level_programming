#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase letters but q and e
 *
 * Return: Always returns 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
