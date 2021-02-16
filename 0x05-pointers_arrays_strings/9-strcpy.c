#include "holberton.h"

/**
 * *_strrcpy - function that returns the ponter to dest;
 * @dest:string to return
 * @str:original copy
 * Return: *dest
 */

char *_strcpy(char *dest, char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		dest[len] = str[len];
	}
	return (dest);
}
