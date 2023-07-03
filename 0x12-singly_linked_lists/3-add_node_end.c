#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the head of the list
 * @str: string to add to list
 *
 * Return: address of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *r_node;
	size_t len = 0;

	if (str == NULL)
		len = 0;

	while (str[len] != '\0')
		len++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = NULL;

	r_node = *head;

	if (r_node == NULL)
		*head = n_node;
	else
	{
		while (r_node->next != NULL)
			r_node = r_node->next;
		r_node->next = n_node;
	}

	return (*head);
}
