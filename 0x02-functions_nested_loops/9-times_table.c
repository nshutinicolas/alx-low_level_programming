#include "holberton.h"

/**
 *times_table - 9 times table iterator
 *
 */

void times_table(void)
{
	int num, level, product;

	for (level = '0'; level <= '9'; level++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			product = level * num;
			if (num == '0')
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
