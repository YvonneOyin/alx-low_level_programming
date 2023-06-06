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
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = ((n[i] - 'a' + 13) % 26) + 'a';
		}
		else if (n[i] >= 'A' && n[i] <= 'Z')
		{
			n[i] = ((n[i] - 'A' + 13) % 26) + 'A';
		}
		i++;
	}
	return (n);
}
