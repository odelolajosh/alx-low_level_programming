#include "main.h"

/**
 * _abs - computes the absolute valueof an integer
 *
 * @n: an integer
 *
 * Return: The absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
