#include "search_algos.h"
#include <math.h>

/**
 * jump_list -  searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t range = (size_t)sqrt(size), k = 0;
	listint_t *upper = list;

	if (!list)
		return (NULL);

	do {
		if (upper->n == value)
			return (upper);

		list = upper;
		k += range;
		while (upper->next && upper->index < k)
			upper = upper->next;

		printf("Value checked at index [%lu] = [%d]\n", upper->index, upper->n);
	} while (k < size && upper->n < value);

	printf(
		"Value found between indexes [%ld] and [%ld]\n",
		list->index,
		upper->index
	);

	while (list && list->n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	if (list)
	{
		printf("Value checked array[%lu] = [%d]\n", list->index, list->n);
		if (list && list->n == value)
			return (list);
	}

	return (NULL);
}
