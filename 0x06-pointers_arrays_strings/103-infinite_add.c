#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: the pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, d1, d2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	do {
		if (c1 > 0)
			c1--, d1 = *(n1 + c1) - '0';
		else
			d1 = 0;
		if (c2 > 0)
			c2--, d2 = *(n2 + c2) - '0';
		else
			d2 = 0;
		op = d1 + d2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		*(r + bg) = (op % 10) + '0';
		bg--, size_r--;
	} while (bg >= 0);
	if (*r == '0')
		return (r + 1);
	return (r);
}
