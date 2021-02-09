#include "holberton.h"

/*
 * Print alphabet in lowercase
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_puchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
