#include "holberton.h"

/**
 * *_strncpy - functino that copies atring
 * @dest: destination string
 * @src: source string
 * @n: length of source string
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int sl = 0, dl = 0;

	while (src[sl] != '\0' && dl < n)
	{
		dest[dl] = src[sl];
		sl++;
		dl++;
	}
	while (dl < n)
	{
		dest[dl] = '\0';
		dl++;
	}
	return (dest);
}
