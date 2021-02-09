#include "holberton.h"

/**
 *print_last_digit - Print the last digit
 * @num: int value
 * Return: retruns the last digit
 *
 */

int print_last_digit(int num)
{
	int last;

	if (num < 0)
		num *= -1;
	last = num % 10;
	_putchar('0' + last);
	return (last);
}
