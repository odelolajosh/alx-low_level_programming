#include "main.h"

/**
 * print_last_digit - Return the last digit of a number
 *
 * @n: int
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = l * -1;

	_putchar('0' + l);
	return (l);
}
