#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int ch, count;

	for (count = 0; count < 10; count++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch > 9)
				_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
