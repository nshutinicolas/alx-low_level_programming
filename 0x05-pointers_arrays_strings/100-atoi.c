#include "holberton.h"

/**
 * _atoi - function that converts strng to int
 * Return: 0 if number is empty else returns the number
 */

int _atoi(char *s)
{
	int first = -1, last, len, sign, i, mul = 1, j = 0;
	unsigned int num = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (first == -1)
			{
				first = i;
				last = i;
			}
			else if (i == last + 1)
				last = j;
			else
				break;
		}
	}
	if (first == -1)
		return (0);
	else
	{
		if(s[0] == -1)
			sign = -1;
		else
			sign = 1;
	while (j < last - first)
	{
		mul *= 10;
		j++;
	}
	for (first = first; first <= last; first++)
	{
		num += (s[first]  '0') * mul;
		mul /= 10;
	}
	return (num * sign);
	}
}
