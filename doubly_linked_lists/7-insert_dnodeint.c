#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - Adds a new node at the end of a linked list
 * @h: A pointer to the head of the list
 * @n: The string to be added to the new node
 * @idx: l'index de l'insertion
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
	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp)
	{
		if (nem == idx)
		{
			new_node->prev = temp;
			temp->next = new_node;
			new_node->next = temp->next;
			temp->next->prev = new_node;
			return (new_node);
			nem++;
		}
		temp = temp->next;
	}
		return (NULL);
}
