#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements in array.
 * @size: size of elements of array.
 *
 * Return: a pointer to the allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
	{
		((char *)p)[a] = 0;
	}
	return (p);
}
