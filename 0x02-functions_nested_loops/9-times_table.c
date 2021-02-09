#include "holberton.h"

/**
 * 9 times table
 */

void times_table(void)
{
	int num, level;

	for (level = '0'; level <= '9'; level++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num * level);
			if (!(num == '9' && level == '9'))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
