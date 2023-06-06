#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @n: string input
 *
 * Return: @n
 */

char *leet(char *n)
{
	int i = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'A', 'E', 'O', 'T', 'L'};
	char c[] = {'4', '3', '0', '7', '1'};

	while (n[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (n[i] == a[j] || n[i] == b[j])
			{
				n[i] = c[j];
			}
			j++;
		}
		i++;
	}

	return (n);
}
