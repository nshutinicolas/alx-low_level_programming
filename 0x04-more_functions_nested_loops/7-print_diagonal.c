#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: size of the diagonal
 */

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
