#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
