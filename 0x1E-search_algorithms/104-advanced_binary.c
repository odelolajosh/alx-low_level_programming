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
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search in
 * Return: the leftmost index where value is located if successful,
 * otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size, mid;

	if (!array)
		return (-1);

	while (left < right)
	{
		print_array(array, left, right - 1);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}

	if (left < size)
		return (left);

	return (-1);
}
