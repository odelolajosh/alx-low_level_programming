#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: The character to check for
 *
 * Return: 1 if @c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
