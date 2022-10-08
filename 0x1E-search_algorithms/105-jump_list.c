#include "search_algos.h"
#include <math.h>

/**
 * jump_list -  searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t range, k = 0;
	listint_t *u = list;

	if (!list || size <= 0)
		return (NULL);

	range = (size_t)sqrt(size);

	do {
		list = u, k += range;
		while (u->next && u->index < k)
			u = u->next;

		printf("Value checked at index [%lu] = [%d]\n", u->index, u->n);
	} while (k < size && u->n < value);

	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", list->index, u->index);

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}

	if (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list && list->n == value)
			return (list);
	}

	return (NULL);
}
