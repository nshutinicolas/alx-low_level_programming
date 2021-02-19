#include "holberton.h"

/**
 * *cap_string - function that capitalises a string after a specification terminator
 * @str: string to capitalise
 * Return: return capitalised string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (
				str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ' '
			    || str[i - 1] == ';' || str[i - 1] == ',' || str[i - 1] == '.'
			    || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"'
			    || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
			    || str[i - 1] == '}')
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
