#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: c is an ascii character
 *
 * Description: checks for alphabetic character
 *
 * Return: Returns 1 for aphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
