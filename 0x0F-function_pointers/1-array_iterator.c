#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - maps through an array and execute function as
 * passed to the argument
 *
 * @array: given array
 * @size: size of array
 * @action: function iterator
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
