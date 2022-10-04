#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located if successful, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}

	return (-1);
}
