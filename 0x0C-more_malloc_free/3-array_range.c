#include <stdlib.h>
#include "main.c"

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

	ptr = malloc(sizeof(int) * (max - min + 1));

	for (i = min; i <= max; i++)
		ptr[i - min] = i;

	return (ptr);
}
