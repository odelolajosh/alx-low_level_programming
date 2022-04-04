#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy ofthe string given as a paramater
 *
 * @str: string to duplicate
 *
 * Return: the pointer to the duplicate of s
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(*str) * strlen(str) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';

	return (p);
}
