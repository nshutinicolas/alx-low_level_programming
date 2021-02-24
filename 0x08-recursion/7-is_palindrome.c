#include "holberton.h"

/**
 * str_len - find the length of string
 * @s: string
 * Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + str_len(s));
}

/**
 * compare - functino to compare characters
 * @h: head
 * @t: tail
 * Return: 0 if not equal else 1
 */

int compare(char *h, char *t)
{
	if (h >= t)
		return (1);
	if (*h == *t)
		return (compare(h + 1, t - 1));
	return (0);
}

/**
 * is_palindrome - function to check for palindrome
 * @s: string
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	int len = str_len(s);

	return (compare(s, (s + (len - 1))));
}
