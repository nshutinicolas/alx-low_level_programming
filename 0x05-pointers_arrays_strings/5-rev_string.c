#include "holberton.h"

/**
 * rev_string - function that prints the reverser of a string
 * @s: string to print in reverse
 */

void rev_string(char *s)
{
	int len;
	char c;

	for (len = 0; s[len] != 0; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		c = s[len];
		s[len] = c;
	}
}
