#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t n_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_count++;
	}
	printf("%d\n", h->n);

	return (n_count);
}
