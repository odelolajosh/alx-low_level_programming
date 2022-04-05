#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates args to a string with newline delimiter
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the string output
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int c, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	ptr = malloc(sizeof(char) * (c + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = k = 0; (i < ac) && (k < c); i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			if (k >= c)
				break;
			ptr[k] = av[i][j];
		}
		if (k < c)
			ptr[k] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
