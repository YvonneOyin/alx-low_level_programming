#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @d: string input
 *
 * Return: @d
 */

char *leet(char *d)
{
	int i = 0, j;
	char x[] = {'a', 'e', 'o', 't', 'l'};
	char y[] = {'A', 'E', 'O', 'T', 'L'};
	char z[] = {'4', '3', '0', '7', '1'};

	while (d[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (d[i] == x[j] || d[i] == y[j])
			{
				d[i] = z[j];
			}
		}
		i++;
	}

	return (d);
}
