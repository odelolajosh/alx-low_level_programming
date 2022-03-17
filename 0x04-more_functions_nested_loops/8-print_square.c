#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: the length of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int l, b;

	l = 0;
	if (size <= 0)
	{
		l = -1;
		size = 0;
	}

	for (; l < size; l++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
