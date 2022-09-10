#include<stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of 3 different digits
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = 0; d2 < 9; d2++)
		{
			for (d3 = 0; d3 < 10; d3++)
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((d3 % 10) + '0');
				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

