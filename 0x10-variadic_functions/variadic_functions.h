#ifndef _VARIADIC_FN_H_
#define _VARIADIC_FN_H_

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FN_H_ */
