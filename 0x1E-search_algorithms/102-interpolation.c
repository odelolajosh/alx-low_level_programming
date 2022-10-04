#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;
	double e;

	if (!array)
		return (-1);

	while (low < high)
	{
		e = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		mid = (size_t)(low + e);

		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
