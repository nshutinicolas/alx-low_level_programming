#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - function locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: string to locate from
 * @accept: set of character to match
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL
 */


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return (NULL);
}
