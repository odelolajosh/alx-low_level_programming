#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: int to print
 *
 * Return: void
 */
void print_number(int n)
{
	/* range start from 0 to the upper positive number limit */
	unsigned int n1, hp;

	/* Put '-' for negative values of n */
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/* get the highest power for n */
	n1 = n;
	hp = 1;

	while (n1 > 9)
	{
		n1 /= 10;
		hp *= 10;
	};

	for (; hp >= 1; hp /= 10)
		_putchar(((n / hp) % 10) + '0');
}

