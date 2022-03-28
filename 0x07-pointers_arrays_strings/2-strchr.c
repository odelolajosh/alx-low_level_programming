#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: the character to search
 *
 * Return: a pointer to the first occurrence of the character c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
