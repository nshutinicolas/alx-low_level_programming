#include "holberton.h"

/**
 * _strcmp - function that compaes two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
