#include "holberton.h"


/**
 * print_triangle - prints a triangle
 *@size: size of the triangle
 */

void print_triangle(int size)
{
	int row, col, i;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= (size - row); col++)
				_putchar(' ');
			for (i = 1; i <= row; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
