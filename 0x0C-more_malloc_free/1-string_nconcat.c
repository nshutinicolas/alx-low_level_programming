#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concanates s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to terminate s2
 * Return: pointer to concantaed string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
		return (NULL);
	if (n >= sizeof(s2))
		n = sizeof(s2);
	p = malloc(sizeof(char) * (sizeof(s1) + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
