#include "holberton.h"

/**
 * *_strchr - functino to locate a character in a string
 * @s:stringg to search from
 * @c: character to search for
 * Return: pointer to the first occurance or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
