#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of intergers
 * @min: start range
 * @max: end range
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, range = (max - min);

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		p[i] = min++;
	return (p);
}
