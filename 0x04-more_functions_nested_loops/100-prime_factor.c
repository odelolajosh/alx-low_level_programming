#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime number of a number
 *
 * Return: 0
 */
int main(void)
{
	long int n, mp;
	int k;

	k = 1;
	mp = -1;
	n = 612852475143;

	while (n % 2 == 0)
	{
		mp = 2;
		n = n / 2;
	}

	for (k = 3; k <= sqrt(n); k = k + 2)
	{
		if (n % k == 0)
		{
			mp = k;
			n = n / k;
		}
	}

	if (n > 2)
		mp = n;

	printf("%ld\n", mp);
	return (0);
}
