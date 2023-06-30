#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: where btyes are copied to
 * @src: where bytes are copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
