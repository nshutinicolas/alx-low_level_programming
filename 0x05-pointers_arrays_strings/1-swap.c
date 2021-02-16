#include "holberton.h"

/**
 *swap_int - function to swap two values
 *@a: first referenced value
 *@b: second referenced value
 */

void swap_int(int *a, int *b)
{
	int holder = *a;

	*a = *b;
	*b = holder;
}
