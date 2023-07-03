#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: head of the linked list.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *r_node;

	while ((r_node = head) != NULL)
	{
		head = head->next;
		free(r_node->str);
		free(r_node);
	}
}
