#include "main.h"

/**
 * *create_array - a function pointer
 *
 * @size: unsigned integer type
 * @c: character type
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);
	if (p == 0)
		return (0);

	for (n = 0; n < size; n++)
	{
		p[n] = c;
	}
	return (p);
}
