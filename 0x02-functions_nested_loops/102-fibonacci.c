#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, count;

	a = 1;
	b = 2;

	printf("%d, %d", a, b);
	for (count = 0; count < 50; count++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
