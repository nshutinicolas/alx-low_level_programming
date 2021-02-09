#include "holberton.h"

/**
 * print_times_table - Prints n times table
 * @n: int value
 *
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; colun++)
			{
				product = row * column;
				if (column == 0)
				{
					_putchar('0' + product);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 100));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + (product / 10) % 10);
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
