#include "holberton.h"

/**
 * *_memcpy - function that copies memory of src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: string buffer
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
