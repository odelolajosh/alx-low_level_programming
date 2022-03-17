#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c mto stdout
 *
 * @c: char to print
 *
 * Return: On success 1 else -1 is returned and errno is set
 * appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
