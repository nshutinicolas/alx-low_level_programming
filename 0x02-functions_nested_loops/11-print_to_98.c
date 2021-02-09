#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - Print to 98
 * @n: the argument
 *
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
