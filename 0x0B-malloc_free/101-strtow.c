#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional array
 *
 * @grid: 2 dimensional array of char
 * @n: row count
 */
void free_ch_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
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
	if (ptr == NULL)
		return (NULL);

	for (c = wc = ws = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ' || str[c + 1] == '\0')
		{
			if (c > ws)
			{
				ptr[wc] = malloc(sizeof(char) * (c - ws + 2));
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
	}
	ptr[wc] = NULL;
	return (ptr);
}
