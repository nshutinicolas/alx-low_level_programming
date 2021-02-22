#include "holberton.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched
 * Return: returns a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j start;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			start = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[start] == needle[j])
					start++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + 1);
		}
	}
	return (NULL);
}
