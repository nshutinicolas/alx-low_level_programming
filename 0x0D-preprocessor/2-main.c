#include <stdio.h>

/**
 * main - program to print name of the file it was compiled from
 * Return: 0 if success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
