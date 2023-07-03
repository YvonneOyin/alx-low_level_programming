#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to head first node
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 1;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
