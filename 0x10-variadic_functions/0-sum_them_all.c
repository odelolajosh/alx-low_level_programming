#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 *
 * @n: number of parameters
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	/* Declaring pointer to the argument list */
	va_list ptr;

	/* Initializing argument to the list pointer */
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		/* Accessing current variable and pointing to the next */
		sum += va_arg(ptr, int);

	/* Ending argument list traversal */
	va_end(ptr);

	return (sum);
}
