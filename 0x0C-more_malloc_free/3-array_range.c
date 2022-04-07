#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: min value of element
 * @max: max value of element
 *
 * Return: pointer to the array of integer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
