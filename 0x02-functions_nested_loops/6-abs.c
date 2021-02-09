#include "holberton.h"
#include <stdio.h>

/**
 *_abs - Printing the absolute
 * Return: returns the absolute value
 * @num: the int value
 *
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
