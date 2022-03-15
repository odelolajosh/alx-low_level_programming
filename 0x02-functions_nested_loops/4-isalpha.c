#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: The character to test
 *
 * Return: 1 if @c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
