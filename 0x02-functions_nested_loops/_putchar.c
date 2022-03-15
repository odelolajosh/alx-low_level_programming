#include <unistd.h>
# include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @ch: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approppriately
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
