#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: length of the memory
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
