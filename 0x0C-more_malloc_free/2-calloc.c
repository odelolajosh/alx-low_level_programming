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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	return (p);
}
