#include <stdio.h>
#include <stdlib.h>

/**
 * containsNonDigit - check if a string contains a non digit
 *
 * @s: given string
 *
 * Return: 1 if s contains a non digit otherwise return 0
 */
int containsNonDigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < '0' || s[i] > '9')
			return (1);
	return (0);
}

/**
 * main - add positive numbers passed as arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc > 0)
	{
		if (containsNonDigit(argv[argc]) == 1)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
