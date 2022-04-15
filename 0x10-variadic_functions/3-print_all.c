#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: a list of types of agruments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j = 0, len = 0, c = 0;
	char *str;

	while (format && format[j])
	{
		if (format[j] == 'c' || format[j] == 'i' ||
				format[j] == 'f' || format[j] == 's')
			len++;
		j++;
	}
	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if  (i < len && c)
			printf(", "), c = 0;
		i++;
	}
	printf("\n"), va_end(valist);
}
