#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and upercase letters
 *
 * Return: Always returns 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
