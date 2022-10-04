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
		printf("%d%s", array[low], low != high ? ", " : "");

	printf("\n");
}

/**
 * advanced_binary_impl - recursive implementation for advanced_binary
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search in
 * Return: the leftmost index where value is located if successful,
 * otherwise -1
 */
int advanced_binary_impl(int *array, size_t size, int value)
{
	size_t m = size / 2;

	if (!array || size == 0)
		return (-1);

	print_array(array, 0, size - 1);

	if (m && size % 2 == 0)
		m--;

	if (array[m] == value && m == 0)
		return (m);

	if (value <= array[m])
		return (advanced_binary_impl(array, m + 1, value));

	m++;
	return (advanced_binary_impl(array + m, size - m, value) + m);
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
	size_t index;

	if (!array)
		return (-1);

	index = advanced_binary_impl(array, size, value);
	return (index < size && array[index] == value ? (int) index : -1);
}
