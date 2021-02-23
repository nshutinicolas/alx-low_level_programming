#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - functions that printts the sum of diagonals
 * @a: array for integers
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		sum1 += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
