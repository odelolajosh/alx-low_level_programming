#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size of the array
 * @c: the fill char
 *
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
