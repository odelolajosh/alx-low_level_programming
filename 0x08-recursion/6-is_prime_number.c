#include "main.h"

/**
 * is_prime_op - check if a number is a prime number recursively
 *
 * @n: number
 * @i: iteratir serving as divisor
 *
 * Return: 1 if n is a prime number otherwise return 0
 */
int is_prime_op(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime_op(n, i + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 *
 * @n: number
 *
 * Return: 1 if n is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_op(n, 2));
}
