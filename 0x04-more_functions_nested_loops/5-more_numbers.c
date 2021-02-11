#include "holberton.h"

/**
 * more_numbers - prints numbers 0-14 10times
 */

void more_numbers(void)
{
	int num, level;

	for (level = 0; level < 10; level++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
		}
	}
	_putchar('\n');
}
