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
	int len = 0, i, j, k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += sizeof(av[i]);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < sizeof(av[i][j]); j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
