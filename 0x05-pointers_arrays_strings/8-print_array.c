#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: ponter
 * @n: integer variable
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
