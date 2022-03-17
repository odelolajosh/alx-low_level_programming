#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2
 * and 4 followed by a new line
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
