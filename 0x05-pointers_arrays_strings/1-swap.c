#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: the first int
 * @b: the second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
