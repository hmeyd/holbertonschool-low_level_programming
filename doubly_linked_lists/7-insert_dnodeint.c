#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the head of the list
 * @idx: The index of the list where the new node should be added
 * @n: The data to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int nem = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp && nem < idx - 1)
	{
		temp = temp->next;
		nem++;
	}

	if (temp == NULL || (temp->next == NULL && nem + 1 != idx))
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}

