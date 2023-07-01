#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: old memory size in bytes
 * @new_size: new memory size in bytes
 *
 * Return: pointer to new memory or NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr, *temp;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);
		free(ptr);
		return (n_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);

	temp = ptr;

	for (a = 0; a < old_size; a++)
		n_ptr[a] = temp[a];

	free(ptr);
	return (n_ptr);
}
