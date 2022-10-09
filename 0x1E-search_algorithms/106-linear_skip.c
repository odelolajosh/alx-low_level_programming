#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the list to search in
 * @value: the value to search for
 * Return: the first index where value is located if sucessful
 * otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lm; /* express limit */

	if (list == NULL)
		return (NULL);

	lm = list;

	do {
		list = lm;
		lm = lm->express;
		printf("Value checked at index [%lu] = [%d]\n", lm->index, lm->n);
	} while (lm->express && value > lm->n);

	if (lm->express == NULL && value > lm->n)
	{
		list = lm;
		while (lm->next)
			lm = lm->next;
	}

	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", list->index, lm->index);

	while (list != lm->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
