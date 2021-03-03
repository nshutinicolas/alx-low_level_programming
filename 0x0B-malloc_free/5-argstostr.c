#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - function to concantate all arguments of program
 * @ac: int value
 * @av:pointer
 * Return: returns pointer to concanated arguments
 */

char *argstostr(int ac, char **av)
{
	int len = 0, i, k = 0;
	unsigned int j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += (sizeof(av[i]) + 1);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
