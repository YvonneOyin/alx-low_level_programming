#include "main.h"

/**
 * rot13 - encodes a string in rot13
 *
 * @n: string to be encoded
 *
 * Return: @n
 */
char *rot13(char *n)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
