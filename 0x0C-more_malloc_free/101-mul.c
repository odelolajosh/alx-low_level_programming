#include "main.h"
#include <stdlib.h>

/**
 * _print - prints a string
 *
 * @s: string
 */
void _print(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * is_zero - exits if a number represented
 * as string is zero
 *
 * @s: given string
 */
void is_zero(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		if (s[i] != '0')
			return;
	_print("0");
	exit(0);
}

/**
 * print_significant - remove zero from the start of a string
 *
 * @s: given string
 */
void print_significant(char *s)
{
	int i = 0;
	while (s[i] == '0' && s[i] != '\0')
		i++;
	_print(s + i);
}

/**
 * num_len - checks for the length of a number in base 10
 * represented in a string
 *
 * @s: given string
 *
 * Return: the length of the number in string,
 * exit program is string contains a non-digit
 */
int num_len(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < '0' || s[i] > '9')
			_print("Error"), exit(98);
	return (i);
}

/**
 * alloc_string - allocate and initialize
 * string to a memory space
 *
 * @len: length of string
 *
 * Return: pointer to the string
 */
char *alloc_string(int len)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		_print("Error"), exit(98);

	/* Initialize ptr */
	for (i = 0; i < len; i++)
		ptr[i] = '0';
	ptr[i] = '\0';
	return (ptr);
}

/**
 * main - multiplies two positive numbers
 * passed as arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int len1, len2, len, i, j, k, c = 0, ca = 0, pr, pa, u = 0;
	char *p;

	if (argc != 3)
		_print("Error"), exit(98);

	len1 = num_len(argv[1]), len2 = num_len(argv[2]);
	is_zero(argv[1]), is_zero(argv[2]);
	len = len1 + len2;
	p = alloc_string(len);

	for (i = len1 - 1, u = 0; i >= 0; i--, u++)
	{
		for (j = len2 - 1, k = len - 1 - u; j >= 0; j--, k--)
		{
			pr = ((argv[1][i] - '0') * (argv[2][j] - '0')) + c;
			c = pr / 10;
			pr %= 10;
			pa = (p[k] - '0') + pr + ca;
			ca = pa / 10;
			pa %= 10;
			p[k] = pa + '0';
		}
		p[k] = (c + ca + (p[k] - '0')) + '0';
		c = 0, ca = 0;
	}

	print_significant(p);
	return (0);
}
