#include "holberton.h"

/**
 * print_alphabet_x10 - Printing alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	char alpha, level;

	for (level = '0'; level <= '9'; level++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
