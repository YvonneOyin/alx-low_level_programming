#include "main.h"

/**
 * _strcpy - copies the string
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
