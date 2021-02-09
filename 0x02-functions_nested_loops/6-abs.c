#include "holberton.h"
#include <stdio.h>

/**
 * Printing the absolute
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
