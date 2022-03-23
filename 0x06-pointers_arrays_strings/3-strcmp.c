#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer indicating the result of the
 * comparison, as follows:
 * 0, if s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	/* Copy the string */
	char *p1 = s1;
	char *p2 = s2;

	while (*p1 && *p1 == *p2)
		++p1, ++p2;

	return (*p1 - *p2);
}
