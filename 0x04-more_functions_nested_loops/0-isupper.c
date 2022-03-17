#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: char to check
 *
 * Return: 1 if @c is uppercase otherwise 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
