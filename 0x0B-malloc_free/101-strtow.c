#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_ch_grid - frees a 2 dimensional array
 *
 * @grid: 2 dimensional array of char
 * @row: row count
 */
void free_ch_grid(char **grid, unsigned int row)
{
	if (grid != NULL && row != 0)
	{
		for (; row > 0; row--)
			free(grid[row]);
		free(grid[row]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 *
 * @str: input string
 *
 * Return: a pointer to an array of the words
 */
char **strtow(char *str)
{
	unsigned int c, ws, wc, arrLen, i;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = arrLen = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			arrLen++;
	ptr = malloc(sizeof(char *) * (arrLen + 1));
	if (ptr == NULL || arrLen == 0)
	{
		free(ptr);
		return (NULL);
	}

	for (c = wc = ws = 0; ; c++)
	{
		if (str[c] == ' ' || str[c] == '\0')
		{
			if (c > ws)
			{
				ptr[wc] = malloc(sizeof(char) * (c - ws + 1));
				if (ptr[wc] == NULL)
				{
					free_ch_grid(ptr, wc);
					return (NULL);
				}

				for (i = 0; ws < c; ws++, i++)
					ptr[wc][i] = str[ws];
				ptr[wc][i] = '\0';
				wc++;
			}
			ws = c + 1;
		}
		if (str[c] == '\0')
			break;
	}
	ptr[wc] = NULL;
	return (ptr);
}
