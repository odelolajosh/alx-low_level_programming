#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime number of a number
 *
 * Return: 0
 */
int main(void)
{
	long int number, largestPrime;
	int k;

	k = 1;
	number = 612852475143;

	for (k = 2; k <= sqrt(number); k++)
		if (number % k == 0 && largestPrime > k)
			largestPrime = k;
	printf("%ld\n", largestPrime);
	return (0);
}
