#include <stdio.h>

/**
 * main - A program that prints the alphabet in
 * lowercase followed by a new line
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
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
