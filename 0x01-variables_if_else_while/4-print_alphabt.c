#include <stdio.h>

/**
 * main - A program that prints all the alphabet except
 * q and e in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* Start from a */
	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
