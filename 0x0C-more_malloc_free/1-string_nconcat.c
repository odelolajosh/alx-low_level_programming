#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates the two string
 *
 * @s1: first string
 * @s2: second string
 * @n: the byte count to concatenate from s2
 *
 * Return: the pointer to the newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len1 = 0, len2 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	len = len1 + n;
	ptr = malloc(sizeof(*ptr) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (; i < len; i++)
		ptr[i] = s2[i - len1];
	ptr[i] = '\0';

	return (ptr);
}
