#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int l, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 1; l <= size; l++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b < size - l + 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
