#include "holberton.h"

/*
 * Print the last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	int last = num % 10;

	_putchar('0' + last);
	return (last);
}
