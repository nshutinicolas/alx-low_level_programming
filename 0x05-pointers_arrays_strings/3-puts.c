#include "holberton.h"

/**
 * _puts - function that prints a string followed by a new line
 * @str: string to print out
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
