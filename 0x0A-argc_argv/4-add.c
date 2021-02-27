#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - function to check if value is numeric
 * @num: character to check
 * Return: 0 if not num else 1
 */

int is_num(char *num)
{
	int j;

	for (j = 0; num[j] != '\0'; j++)
	{
		if (!(num[j] >= '0' && num[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: return 1 if error else 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
