#include "holberton.h"

/**
 * is_prime_number - function to determin prime number
 * is_prime - helper function
 * @n: number
 * @i: divider
 * Return: returns 0 if not prime number and 1 otherwise
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

int is_prime_number(int n)
{
	int i = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, i + 1));
}
