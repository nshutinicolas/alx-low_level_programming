#include "holberton"

/**
 * *_strncat - function to concanate two strings
 * @dest: destination string
 * @src: srouce string
 * @n: length of the source string
 * Return: returns concanated string
 */

char *_strncat(char dest, char *src, int n)
{
	int dl = 0, sl = 0;

	while (dest[dl] != '\0')
		dl++;
	while (src[sl] != '\0' && sl < n)
	{
		dest[dl] = src[sl];
		dl++;
		sl++;
	}
	return (dest);
}
