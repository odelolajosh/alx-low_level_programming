#include "main.h"

/**
 * _strlen - gets the length of a string
 *
 * @s: given string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compareWithIterators - compare the char at index l and r
 *
 * @s: given string
 * @l: left index iterator
 * @r: right index iterator
 *
 * Return: 1 if s is a palindrome else return 0
 */
int _compareWithIterators(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (*(s + l) == *(s + r))
		return (0 + _compareWithIterators(s, l + 1, r - 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: given string
 *
 * Return: 1 if s is a palindrome otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compareWithIterators(s, 0, _strlen(s) - 1));
}
