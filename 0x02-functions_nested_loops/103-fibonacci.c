#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = b;
	c = a + b;
	
	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
