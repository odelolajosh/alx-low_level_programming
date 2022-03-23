#include "main.h"

/**
 * leet - encodes a string to 1337
 *
 * @s: string
 *
 * Return: the pointer to s
 */
char *leet(char *s)
{
	int i, j;

	int lowLetters[] = {'a', 'e', 'o', 't', 'l'};
	int upperLetters[] = {'A', 'E', 'O', 'T', 'L'};
	int replacement[] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lowLetters[j] || *(s + i) == upperLetters[j])
			{
				*(s + i) = replacement[j];
				break;
			}
		}
	}

	return (s);
}
