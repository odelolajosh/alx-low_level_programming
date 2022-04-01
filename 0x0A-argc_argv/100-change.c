#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make chnage for an amount
 * of money
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cent, i, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (cent >= coins[i])
		{
			change += cent / coins[i];
			cent %= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}

