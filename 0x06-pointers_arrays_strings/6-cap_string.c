#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input string
 *
 * Return: pointer to As
 */
char *cap_string(char *s)
{
	int count = 0, i;
	int sepWords[] = {'\n', '\t', ' ', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	if (*(s + count) > 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sepWords[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
