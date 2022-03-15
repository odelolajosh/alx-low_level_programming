#include "main.h"

void times_table(void)
{
	int a, b, m, n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = (a * b) / 10;
			n = (a * b) % 10;

			if (b > 0)
				_putchar(' ');

			if (b > 1)
			{
				if (m == 0)
					_putchar(' ');
				else
					_putchar('0' + m);
			}
			_putchar('0' + n);
			if (b == 9)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
