#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - function to duplicate a string
 * @str: string to duplicate
 * Return: return a pointer to a duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
