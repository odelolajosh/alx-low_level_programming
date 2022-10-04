#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t range = (size_t) sqrt(size); /* block range */
	size_t low = 0, up = 0;

	if (!array)
		return (-1);

	do {
		printf("Value checked array[%ld] = [%d]\n", up, array[up]);
		if (array[up] == value)
			return (up);
		low = up;
		up += range;
	} while (up < size && array[up] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", low, up);

	while (array[low] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (++low == size)
			return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	if (array[low] == value)
		return (low);

	return (-1);
}
