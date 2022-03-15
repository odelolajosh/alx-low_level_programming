#include "main.h"

/**
 * print_times_table - prints the @n times table, starting with 0
 *
 * @n: int
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		_putchar(48);
		for (b = 1; b <= n; b++)
		{
			c = a * b;
			_putchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c <= 99)
			{
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(((c / 100) % 10) + '0');
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
