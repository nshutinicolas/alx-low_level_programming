#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function to create an array of char pre initialised
 * @size: size of the array
 * @c: character to initialise the array with
 * Return: pointer to new array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(c));
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
