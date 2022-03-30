#include "main.h"

/**
 * _sqrt - solves for the square root recursively
 *
 * @sqrt: sqrt counter
 * @num: number to find sqrt for
 *
 * Return: the square root of num
 */
int _sqrt(int sqrt, int num)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	if (sqrt * sqrt > num)
		return (-1);
	if (sqrt * sqrt < num)
		sqrt++;
	return (_sqrt(sqrt, num));
}

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: number
 *
 * Return: the natural square root of n if n is a perfect square else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(1, n));
}
