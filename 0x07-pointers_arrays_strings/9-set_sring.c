#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: variable that points to a pointer
 * @to: char
 */

void set_string(char **s, char *to)
{
	*s = to;
}