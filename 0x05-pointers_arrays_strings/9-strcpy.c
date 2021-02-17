#include "holberton.h"

/**
 * *_strcpy - function that returns the ponter to dest;
 * @dest:string to return
 * @str:original copy
 * Return: *dest
 */

char *_strcpy(char *dest, char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
