#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	double a, b, c;
	int count;

	a = 1;
	b = 2;

	printf("%.0f, %.0f", a, b);
	for (count = 0; count < 48; count++)
	{
		c = a + b;
		printf(", %.0f", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
