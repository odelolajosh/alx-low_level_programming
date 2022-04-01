#include <stdio.h>

/**
 * main - print the number of arguments passed
 * to an program
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
