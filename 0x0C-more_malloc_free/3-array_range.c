#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimun value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int a, *p;

	if (min > max)
		return (NULL);

	p = malloc(((max + 1) - min) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		p[a] = min;
		min++;
	}
	return (p);
}
