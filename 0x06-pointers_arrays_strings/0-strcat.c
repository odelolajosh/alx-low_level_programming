#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int lenSrc = 0, lenDest = 0;

	while (*(dest + lenDest) != '\0')
		lenDest++;

	/* While true */
	while (1 == 1)
	{
		*(dest + lenDest) = *(src + lenSrc);
		if (*(src + lenSrc) == '\0')
			break;

		lenSrc++;
		lenDest++;
	}

	return (dest);
}
