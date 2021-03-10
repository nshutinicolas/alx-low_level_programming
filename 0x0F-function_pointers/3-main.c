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
	f = get_op_func(argv[2]);
	if (f == NULL || argv [2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	printf("%d\n", f(n1, n2));
	return (0);
}
