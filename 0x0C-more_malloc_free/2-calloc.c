#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory using malloc
 * @nmemb: number of array elements
 * @size: of each byte
 * Return: pointer to created memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		*((char *)p + i) = 0;
	return (p);
}
