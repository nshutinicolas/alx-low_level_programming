#include "holberton.h"
#include <stdio.h>

/**
 * print_array - functino that prints an array elements
 * @a:array elements
 * @n: length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
