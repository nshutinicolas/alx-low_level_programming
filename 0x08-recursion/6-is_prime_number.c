#include "holberton.h"

/**
 * is_prime - function that returns the prime number
 * @n: number
 * @i: divider
 * Return: rpine returns the prime info
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - function that computes the prime number
 * @n: the number to examine
 * Return: 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, i + 1));
}
