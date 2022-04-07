#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory using malloc
 *
 * @b: him
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
