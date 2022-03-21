#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (len >= 0) /* while true */
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (i = 0; i < (len - 1) / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
