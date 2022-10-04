#include "search_algos.h"

/**
 * print_array - prints a subset from an array
 * @array: a pointer to the first element of the array
 * @low: the lower boundary
 * @high: the upper boundary
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 1, mid;

	if (!array)
		return (-1);

	do {
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		if (array[high] == value)
			return (high);
		low = high;
		high *= 2;
	} while (high < size && array[high] < value);

	if (high > size - 1)
		high = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
