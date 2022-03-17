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
	
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
