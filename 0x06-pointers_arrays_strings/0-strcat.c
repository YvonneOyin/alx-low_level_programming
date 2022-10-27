#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d])
		d++;

	for (s = 0; src[s] ; s++)
		dest[d++] = src[s];

	return (dest);
}
