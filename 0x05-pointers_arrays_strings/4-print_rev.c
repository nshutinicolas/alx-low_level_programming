#include "holberton.h"

/**
 *print_rev - function to print reverse string
 *@s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
