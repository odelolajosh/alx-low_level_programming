#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 and 5 below 1024, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int c, sum;

	sum = 0;
	for (c = 1; c < 1024; c++)
		if ((c % 3 == 0) || (c % 5 == 0))
			sum += c;
	printf("%d\n", sum);
	return (0);
}
