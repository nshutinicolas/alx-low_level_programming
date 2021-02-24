#include "holberton.h"

/**
 * _pow_recursion - returns the x power y
 * @x: first number
 * @y: power factor
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x, y));
}
