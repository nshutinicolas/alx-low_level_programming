#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: string with character to search
 * Return: returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (num);
		}
	}
	return (num);
}
