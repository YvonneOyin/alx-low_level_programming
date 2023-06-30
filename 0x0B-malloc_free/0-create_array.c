#include "main.h"

/**
 * create_array - creates an array of chars, and
 *				  initializes it with a specific char.
 *
 * @size: size of the array
 * @c: char to initialize array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}