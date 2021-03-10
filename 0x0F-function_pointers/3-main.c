#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	return (0);
}
