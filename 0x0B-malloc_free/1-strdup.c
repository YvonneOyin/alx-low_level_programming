#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory...
 *
 * @str: pointer to a string of characters
 *
 * Return: a pointer to the duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int n, size;

	n = 0;
	size = 0;
	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	cpy = malloc(sizeof(char) * (size + 1));
	if (cpy == NULL)
		return (NULL);

	while ((cpy[n] = str[n]))
	{
		n++;
	}
	return (cpy);
}
