#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string
 */
void print_rev(char *s)
{
	int len = 0;
	/* Get the length of the string */
	while (1 == 1)
	{
		if (*(s + len) == '\0')
			break;
		len++;
	}

	for (--len; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
