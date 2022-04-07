#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function thate allocates memory for an array
 *
 * @nmemb: the length of the array
 * @size: the size of array elements
 *
 * Return: pointer of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
