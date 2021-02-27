#include "holberton.h"
#include <stdio.h>

/**
 * main - function that prints number of arguments passed to it
 * @argc:argument count
 * @argv: argumant vector
 * Return: Returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
