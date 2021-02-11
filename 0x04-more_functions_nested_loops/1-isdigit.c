#include "holberton.h"

/**
 * _isdigit - function that verifies if a character is a digit
 *@c: variable to be tested
 * Return:returns 1 if true or 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
