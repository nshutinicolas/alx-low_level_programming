#include "holberton.h"

/**
 * *string_toupper - function to chane string to uppercase
 * @str: string to convert
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
