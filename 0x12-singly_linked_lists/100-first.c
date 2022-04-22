#include "lists.h"

/**
 * before_main - function executes before main
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
