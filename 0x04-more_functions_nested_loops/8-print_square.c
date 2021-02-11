#include "holberton.h"

/**
 * print_square - prints the square followed by a new line
 *@size: size of the square
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
