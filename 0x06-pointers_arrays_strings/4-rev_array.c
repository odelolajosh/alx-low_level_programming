#include "main.h"

/**
 * reverse_array - reverse the array
 *
 * @a: pointer
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		if (i == n - i)
			break;

		temp = *(a + n - i - 1);
		*(a + n - i - 1) = *(a + i);
		*(a + i) = temp;
	}
}
