#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			p = a * b;
			_putchar(',');
			_putchar(' ');
			if (p <= 9)
			{
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(((p / 10) % 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
