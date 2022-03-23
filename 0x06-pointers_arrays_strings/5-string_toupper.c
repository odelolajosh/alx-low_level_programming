#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: input string
 *
 * Return: the pointer to dest
 */
char *string_toupper(char *s)
{
	int i;
	char ch;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		ch = *(s + i);

		if (ch >= 'a' && ch <= 'z')
			ch += 'A' - 'a';

		*(s + i) = ch;
	}

	return (s);
}
