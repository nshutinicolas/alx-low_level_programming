#include "holberton.h"

/**
 * *_strcat - function that concanate two strings
 * @dest: destination string
 * @src: source string
 * Return: returns the concanated string
 */

char *_strcat(char *dest, char *src)
{
	int dl = 0, sl = 0;

	while (dest[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
	{
		dest[dl] = src[sl];
		sl++;
		dl++;
	}
	return (dest);
}
