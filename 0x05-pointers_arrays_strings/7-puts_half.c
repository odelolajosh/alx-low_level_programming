#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string input
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* get length */
	while (*(str + len) != '\0')
		len++;

	for (i = (len / 2); i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
