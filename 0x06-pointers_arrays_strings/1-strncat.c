#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes used from src
 *
 * Return: the pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenSrc = 0, lenDest = 0;

	while (*(dest + lenDest) != '\0')
		lenDest++;

	/* While true */
	while (lenSrc < n)
	{
		*(dest + lenDest) = *(src + lenSrc);
		if (*(src + lenSrc) == '\0')
			break;

		lenSrc++;
		lenDest++;
	}

	return (dest);
}
