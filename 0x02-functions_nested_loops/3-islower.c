#include "holberton.h"

/**
 *_islower - Printing lowercase
 * @c: int value
 * Return: 1 if lower and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
