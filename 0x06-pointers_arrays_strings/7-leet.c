#include "holberton.h"

/**
 * *leet - function that encodes string to 1337
 * @str: string to encode
 * Return: returns the encoded string
 */

char *leet(char *str)
{
	int og[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int enc[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0;  og[j] != '\0'; j++)
		{
			if (str[i] == og[j])
				str[i] = enc[i];
		}
	}
	return (str);
}
