#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the newly allocated space in memory
 * which contains the concatenated form of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	p = malloc(sizeof(*p) * (l1 + l2 + 1));

	if (p == NULL)
		return (NULL);

	for (; i < l1; i++)
		p[i] = s1[i];

	i = 0;
	for (; i <= l2; i++)
		p[l1 + i] = s2[i];

	return (p);
}
