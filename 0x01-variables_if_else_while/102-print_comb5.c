#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		int j;

		j = 48;
		while (j < 57)
		{
			int k;

			k = i;
			while (k < 58)
			{
				int l;

				l = j + 1;
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
