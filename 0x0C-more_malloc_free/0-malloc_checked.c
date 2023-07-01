#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: the number of bytes to be allocated using malloc
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p ==  NULL)
		exit(98);
	return (p);
}
