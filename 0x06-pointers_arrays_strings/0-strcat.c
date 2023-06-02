#include "main.h"

/**
 * _strcat - function that links two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d])
	{
		d++;
	}
	s = 0;
	while (src[s])
	{
		dest[d++] = src[s];
		s++;
	}

	return (dest);
}
