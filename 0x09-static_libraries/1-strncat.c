#include "main.h"

/**
 * *_strncat - links two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: Integer parameter
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
	{
		c++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';

	return (dest);
}
