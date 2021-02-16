#include "holberton.h"

/**
 * puts_half - function that prints the last half of a string
 * @str:string to be printed
 */

void puts_half(char *str)
{
	int len, half;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	if (len % 2 != 0)
		half = (len + 1) / 2;
	else
		half = len / 2;
	for (half = half; half < len; half++)
		_putchar(str[half]);
	_putchar('\n');
}
