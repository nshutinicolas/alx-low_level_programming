#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - function to conact two strings
 * @s1: first string
 * @s2: second string
 * Return: concanated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = sizeof(s1);
	len2 = sizeof(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++, i++;
	}
	p[i] = '\0';
	return (p);
}
