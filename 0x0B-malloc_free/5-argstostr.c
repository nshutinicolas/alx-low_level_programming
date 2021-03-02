#include "holberton"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - function to concantate all arguments of program
 * @ac: int value
 * @av:pointer
 */

char *argstostr(int ac, char **av)
{
	int len = 0, i;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += sizeof(av[i]);
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < sizeof(av[i]); j++)
			p[j] = av[i][j];
		p[j] = '\n';
	}
	return (p);
}
