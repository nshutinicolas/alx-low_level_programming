#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return 1 if error else 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
