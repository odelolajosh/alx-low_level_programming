#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: the size of the string
 */
int _strlen(char *s)
{
	int len;
	char ch;

	len = 0;
	while (ch != '\0')
	{
		++len;
		ch = *(s + len);
	}

	return (len);
}
