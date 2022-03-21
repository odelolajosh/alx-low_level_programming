#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: the string
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int len = 0, size = 0, p = 1, res = 0, sign = 1, i = 0;

	while (*(s + len) != '\0')
	{
		if (size > 0 && (*(s + len) < '0' || *(s + len) > '9'))
			break;

		if (*(s + len) == '-')
			sign *= -1;

		if ((*(s + len) >= '0') && (*(s + len) <= '9'))
		{
			if (size > 0)
				p *= 10;

			size++;
		}
		len++;
	}


	for (i = len - size; i < len; i++)
	{
		res += ((*(s + i) - '0') * p);
		p /= 10;
	}

	return (sign * res);
}
