#include "holberton.h"

/**
 * reverse_array - function that reverses the array
 * @a: array to reverse
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int i, arr;

	for (i = 0; i < n; i++)
	{
		arr = a[i];
		a[i] = a[n - 1];
		a[n - 1] = arr;
		n--;
	}
}
