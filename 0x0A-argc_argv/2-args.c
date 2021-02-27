#include "holberton.h"
#include <stdio.h>

/**
 * main - function that prints all arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
